import sqlite3
import os
import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from ultralytics import YOLO
import torch
from hololens_msgs.msg import Image
from hololens_msgs.srv import GetAIData

# import the message types

class AIDBService(Node):
    def __init__(self):
        super().__init__('ai_database')
        self.connection = sqlite3.connect('ai_db.db')
        self.cursor = self.connection.cursor()
        self.db_init()

        # load the yolo model
        model_path = 'yolov5s.pt'
        self.yolo = YOLO(model_path)
        # load the model to the gpu if available
        if torch.cuda.is_available():
            self.yolo.cuda()

        self.frame = None

        # initialize the node
        #rospy.init_node('ai_db_service', anonymous=True)
        # subscribe to the camera data
        self.subscription = self.create_subscription(
            Image, 
            'camera_feed', 
            self.camera_callback, 
            10)
        self.subscription
        # create the ai db service
        self.srv = self.create_service(
            GetAIData, 
            'ai_db_data', 
            self.ai_callback)
        self.srv

        
    def db_init(self):
        table_name = 'scenes'
        # check if table exists
        exists = self.cursor.execute(f"SELECT name FROM sqlite_master WHERE type='table' AND name='{table_name}';")
        if not exists.fetchone():
            # create the table
            self.cursor.execute(f'''
                CREATE TABLE IF NOT EXISTS {table_name} (
                    id INTEGER PRIMARY KEY,
                    class VARCHAR(255),
                    scene_name TEXT
                )
            ''')
    """
    Set self.frame to the image data published from the camera
    """
    def camera_callback(self, msg):
        """
        Callback function for the camera data
        """
        # convert the image to a numpy array
        image = np.asarray(bytearray(msg.data), dtype=np.uint8)
        # decode the image
        self.frame = cv2.imdecode(image, cv2.IMREAD_COLOR)

    """
    Respond to get_ai_data srv request with the class name, instructions, and 3d model for the object in the image
    """
    def ai_callback(self, request, response):
        """
        Service to get ai data
        """
        # run the yolo model on the image
        results = self.yolo(self.frame)
        # get the class of the object
        class_names = results.names
        
        #scene_names = [self.get_data(name) for name in class_names]
        scene_names = ["ACRIMSAT_Fine_Sun_Sensor"]

        # get the instructions for the class
        #instructions, model = self.get_data(class_name)
        #scene_name = self.get_data("solar_panel")

        # create the response srv message
        response.scene_names = scene_names

        return response
    
    """
    Get the data for the class from the database
    """
    def get_data(self, class_name):
        """
        Get the data for the class
        """
        # get the data from the database
        self.cursor.execute(f"SELECT * FROM scenes WHERE class='{class_name}'")
        data = self.cursor.fetchone()
        if data:
            return data[2]
        else:
            return None, None


def main(args=None):
    rclpy.init(args=args)
    aidb = AIDBService()
    try:
        rclpy.spin(aidb)
    except KeyboardInterrupt:
        pass
    finally:
        aidb.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

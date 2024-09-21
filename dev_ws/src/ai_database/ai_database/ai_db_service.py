import sqlite3
import os
import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from ultralytics import YOLO
import torch
from hololens_msgs.msg import Image, AIData
from hololens_msgs.srv import GetAIData

# import the message types

class AIDBService(Node):
    def __init__(self):
        super().__init__('ai_database')
        self.connection = sqlite3.connect('ai_db.db')
        self.cursor = self.connection.cursor()
        self.db_init()

        # load the yolo model
        model_path = 'satellite.pt'
        self.yolo = YOLO(model_path)
        # load the model to the gpu if available
        if torch.cuda.is_available():
            self.yolo.cuda()

        self.frame = None
        self.scene_names = []

        # subscribe to the camera data
        self.subscription = self.create_subscription(
            Image, 
            'camera_feed', 
            self.camera_callback, 
            10)
        self.subscription

        # create the publisher
        self.publisher_ = self.create_publisher(
            AIData,
            'ai_data',
            10)
        self.publisher_

        # 1 second timer to publish the data
        timer_period = 1
        self.timer = self.create_timer(timer_period, self.publish_data)
    
    def publish_data(self):
        msg = AIData()
        msg.scene_names = self.scene_names
        self.publisher_.publish(msg)
        
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
    Set self.frame to the image data published
    """
    def camera_callback(self, msg):
        """
        Callback function for the camera data
        """
        # convert the image to a numpy array
        image = np.asarray(bytearray(msg.data), dtype=np.uint8)
        # decode the image
        self.frame = cv2.imdecode(image, cv2.IMREAD_COLOR)
        
        # run the yolo model on the image
        results = self.yolo(self.frame)
        # get the class of the object
        class_names = results[0].names

        # Uncomment the following line and comment the next line to get the class names from the database
        #self.scene_names = [self.get_data(name) for name in class_names]
        self.scene_names = ["ACRIMSAT_Fine_Sun_Sensor"]
    
    """
    Get the data for the class from the database
    """
    def get_data(self, class_name):
        """
        Get the data for the class
        """
        # get the data from the database
        self.cursor.execute(f"SELECT scene_name FROM scenes WHERE class='{class_name}'")
        data = self.cursor.fetchone()
        if data:
            return data[0]


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

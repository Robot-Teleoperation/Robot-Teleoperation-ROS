import sqlite3


def main():
    conn = sqlite3.connect('ai_db.db')
    
    cursor = conn.cursor()

    while True:
        try:
            class_name = input("Enter class name: ")
            scene_name = input("Enter scene name: ")

            cursor.execute(f"INSERT INTO scenes (class, scene_name) VALUES (?, ?)", (class_name, scene_name))

            conn.commit()
        except KeyboardInterrupt:
            break

    conn.close()


if __name__ == '__main__':
    main()

import sqlite3


def main():
    conn = sqlite3.connect('ai_db.db')

    cursor = conn.cursor()

    while True:
        try:
            class_name = input("Enter class name: ")
            model = input("Enter scene name: ")

            cursor.execute(f"INSERT INTO classification (class, model) VALUES (?, ?)", (class_name, model))

            conn.commit()
        except KeyboardInterrupt:
            break

        conn.close()


if __name__ == '__main__':
    main()

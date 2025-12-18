# Managing your personal book collection: Let's assume you have a large collectin of books in your home. To track the 
# details of the books and their availablity status(eg. to whom and when you lent it), you want to maintain a digital record.
# To start with this project, following preliminaries are to bre done:

# - Decide on the record structure(eg. which data structure(s) to use, what fields to keep, what will be the unique field etc.)

# - write a file handling program(s) to do the following:

#      > Add new records of books
#      > Search for books using various criteria(like ISBN, Book name, Author etc.)
#      > Modify the detail of existing book records

# Also add a simple menu so user can easily interect with it.

import os

# ---------------- ADD BOOK ----------------
def addBook():
    file = open("books.txt", "a")

    book_id = input("Enter Book ID: ")
    name = input("Enter Book Name: ")
    author = input("Enter Author Name: ")
    status = input("Enter Status (Available/Lent): ")

    record = book_id + "," + name + "," + author + "," + status + "\n"
    file.write(record)

    file.close()
    print("Book added successfully!")


# ---------------- SEARCH BOOK ----------------
def searchBook():
    try:
        file = open("books.txt", "r")
    except FileNotFoundError:
        print("No books found. Please add books first.")
        return

    search_id = input("Enter Book ID to search: ")
    found = False

    for line in file:
        data = line.strip().split(",")

        if data[0] == search_id:
            print("\nBook Found")
            print("ID:", data[0])
            print("Name:", data[1])
            print("Author:", data[2])
            print("Status:", data[3])
            found = True
            break

    if not found:
        print("Book not found.")

    file.close()


# ---------------- MODIFY BOOK ----------------
def modifyBook():
    try:
        file = open("books.txt", "r")
    except FileNotFoundError:
        print("No books found to modify.")
        return

    temp = open("temp.txt", "w")
    modify_id = input("Enter Book ID to modify: ")
    found = False

    for line in file:
        data = line.strip().split(",")

        if data[0] == modify_id:
            print("Enter new details:")
            name = input("New Book Name: ")
            author = input("New Author Name: ")
            status = input("New Status (Available/Lent): ")

            new_record = modify_id + "," + name + "," + author + "," + status + "\n"
            temp.write(new_record)
            found = True
        else:
            temp.write(line)

    file.close()
    temp.close()

    os.remove("books.txt")
    os.rename("temp.txt", "books.txt")

    if found:
        print("Book record modified successfully!")
    else:
        print("Book ID not found.")


# ---------------- MENU ----------------
while True:
    print("\n====== BOOK MANAGEMENT SYSTEM ======")
    print("1. Add Book")
    print("2. Search Book")
    print("3. Modify Book")
    print("4. Exit")
    print("===================================")

    choice = input("Enter your choice: ")

    if choice == "1":
        addBook()
    elif choice == "2":
        searchBook()
    elif choice == "3":
        modifyBook()
    elif choice == "4":
        print("Exiting program...")
        break
    else:
        print("Invalid choice! Try again.")

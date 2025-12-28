import csv

books = []

# Add books to shelf by reading from books.csv
with open("books.csv") as file:
    text = file.read()
    print(text)

# Print books
...

# Prints all favorites in CSV using csv.reader

import csv

from collections import Counter

# Open CSV file
with open("favorites.csv", "r") as file:

    # Create reader
    reader = csv.DictReader(file)

    # Counts
    counts = Counter()

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["problem"]
        counts[favorite] += 1

# Print counts
favorite = input("Favorite: ")
print(f"{favorite}: {counts[favorite]}")

from cs50 import get_float

while True:
    dollars = get_float("Changes owed: ")
    if dollars > 0:
        break

# Calculate quarters
cents = int(dollars * 100)
sum = 0
quarters = 0
dimes = 0
nickles = 0
pennies = 0

while cents >= 25:
    quarters += 1
    cents -= 25

# Calculate dimes
while cents >= 10:
     dimes += 1
     cents -= 10
# Calculate nickles
while cents >= 5:
    nickles += 1
    cents -= 5
# Calculate pennies
while cents >= 1:
    pennies += 1
    cents -= 1

sum = quarters + dimes + nickles + pennies

print(f"Total coins are {sum}")


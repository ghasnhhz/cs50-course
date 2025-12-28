from cs50 import get_float

while True:
    coins = get_float("Amount: ")
    if coins > 0:
        break
coins = round(coins * 100)

counter = 0

# The number of quarters (25¢)
while coins >= 25:
    coins = coins - 25
    counter +=1

#The number of dimes (10¢)
while coins >= 10:
    coins = coins - 10
    counter +=1

#The number of nickels (5¢)
while coins >= 5:
    coins = coins - 5
    counter +=1

#The number of pennies (1¢)
while coins >= 1:
    coins = coins - 1
    counter +=1

print(f"Result: {counter}")

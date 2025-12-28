from cs50 import get_string, get_int

surname = get_string("Whats your surname:")
name = get_string("Whats your name: ")
age = get_int("whats your age: ")

print(f"hello {surname} {name}.You are {age} years old.")

# Abstraction with parameterization
from cs50 import get_int

def main():
    while True:
        n = get_int("N: ")
        if n > 0:
            break
    count_meow = meow(n)
    print(f"{count_meow} times meowed")



# Meow some number of times
def meow(n):
    counter = 0
    for i in range(n):
        counter += 1
    return counter

main()

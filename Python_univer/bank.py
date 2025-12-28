from cs50 import get_int

def main():
    sarmoya = get_int("How much money: ")
    amount = get_int("Amount: ")

    resultofsarmoya = s(sarmoya)
    resultofamount = a(amount)

    print(f"Months to 1200: {resultofsarmoya}")
    print(f"Months to 30 : {resultofamount}")



def s(sarmoya):
    months = 0
    while sarmoya <= 1200:
        sarmoya += sarmoya // 50
        months += 1
    return months

def a(amount):
    months = 0
    while amount <= 30:
        amount += amount // 50
        months += 1
    return months


main()










# Oddiy raqamni rim raqamiga o'zgartiruvchi dastur tuzing (masalan: 1993 = MCMXCIII, 10 = X)

from cs50 import get_int

for i in range(n):
        Months_count = 0
        Thegivenmoney = 1000

        Months = Thegivenmoney + Thegivenmoney // 50
        Thegivenmoney = Months
        Months_count += Thegivenmoney // 50

    # print(f"The result: {Thegivenmoney}")

    if Thegivenmoney >= 1200:
        print(f"{Thegivenmoney}")
    elif Months_count >= 30:
        print(f"{Months_count}"

    else:
        print("Not enough")

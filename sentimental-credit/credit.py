from cs50 import get_int
import sys

def main():
    # Card number must be greater than 0
    while True:
        card_number = get_int("Card number: ")
        if card_number > 0:
            break

    sum_every_other_digit = every_other_digit(card_number)
    num_Digits = number_of_digits(card_number)
    amex = isValidAmex(card_number, num_Digits)
    mastercard = isValidMasterCard(card_number, num_Digits)
    visa = isValidVisa(card_number, num_Digits)


    if sum_every_other_digit % 10 != 0:
        print("INVALID")
        sys.exit(0)
    elif amex == True:
        print("AMEX")
    elif mastercard == True:
        print("MASTERCARD")
    elif visa == True:
        print("VISA")
    else:
        print("INVALID")
    sys.exit(0)

    # print(f"Number of digits are {num_Digits}, and Sum is {sum_every_other_digit}")

# Here we are finding everyotherdigit and pultipling each of them by 2 and the other left digits are being calculated as well
def every_other_digit(card_number):
    sum = 0
    isAlternateDigit = False
    while card_number > 0:
        if isAlternateDigit == True:
            # % gives us the last digit of a number: 123 % 10 -> 3
            last_digit = card_number % 10

            # Note that last_digit is taken to multiplyandsum function which means that the parametres can be used in all function definitions
            SUM = multiplyandsum(last_digit)
            sum = sum + SUM
        else:
            # Here are the not multiplied digits
            sum = sum + card_number % 10

        isAlternateDigit = not isAlternateDigit
        card_number = card_number // 10
    return sum



def multiplyandsum(last_digit):
    sum = 0
    multiplyandsum = last_digit * 2
    while multiplyandsum > 0:
        sum += multiplyandsum % 10
        multiplyandsum = multiplyandsum // 10
    return sum


def number_of_digits(card_number):
    # Count how many digits each card has
    count = 0
    while card_number > 0:
        count += 1
        card_number = card_number // 10
    return count


def isValidAmex(card_number, num_Digits):
    # pow is: pow(10, 13) -> 1,000,000,000,000,0
    first_two_digits = card_number // pow(10, 13)
    if num_Digits == 15 and first_two_digits == 34 or first_two_digits == 37:
        return True
    else:
        return False


def isValidMasterCard(card_number, num_Digits):
    first_two_digits = card_number // pow(10, 14)
    if num_Digits == 16 and first_two_digits > 50 and first_two_digits < 56:
        return True
    else:
        return False


def isValidVisa(card_number, num_Digits):
    if num_Digits ==13:
        first_digit = card_number // pow(10, 12)
        if first_digit == 4:
            return True
    elif num_Digits == 16:
        first_digit = card_number // pow(10, 15)
        if first_digit == 4:
            return True
    return False


main()
# 378282246310005 AMEX
# 5555555555554444 MASTERCARD
# 4111111111111111 VISA

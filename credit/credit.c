#include <cs50.h>
#include <math.h>
#include <stdio.h>

int every_other_digit(long card_number);
int multiplyandsum(int card_number);
int number_of_digits(long card_number);
bool isValidAmex(long card_number, int numDigits);
bool isValidMasterCard(long card_number, int numDigits);
bool isValidVisa(long card_number, int numDigits);

int main(void)
{
    // card number must be greater than 0
    long card_number = get_long("Card number: ");

    // Now we need to find digits that are multiplied by 2
    int sum_every_other_digit = every_other_digit(card_number);
    int numDigits = number_of_digits(card_number);
    bool amex = isValidAmex(card_number, numDigits);
    bool mastercard = isValidMasterCard(card_number, numDigits);
    bool visa = isValidVisa(card_number, numDigits);

    if (sum_every_other_digit % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    else if (amex == true)
    {
        printf("AMEX\n");
    }
    else if (mastercard == true)
    {
        printf("MASTERCARD\n");
    }
    else if (visa == true)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}

// First intented function is to find the everyotherdigit and the others as well
int every_other_digit(long card_number)
{
    int sum = 0;
    bool isAlternateDigit = false;
    while (card_number > 0)
    {
        if (isAlternateDigit == true)
        {
            // % gives us the last digit of a number: 123 % 10 -> 3
            int last_digit = card_number % 10;
            // Note that last_digit is taken to multiplyandsum function which means that the parametres can be used in all function
            // definitions
            int SUM = multiplyandsum(last_digit);
            sum = sum + SUM;
        }
        else
        {
            sum = sum + card_number % 10;
        }
        isAlternateDigit = !isAlternateDigit;
        // / this takes all the digits except for the last one: 123 / 10 -> 12
        card_number = card_number / 10;
    }
    return sum;
}

// Second intented function is to multiply,and add each digit, and return the result to the first function
int multiplyandsum(int last_digit)
{
    // In here, main purpose is to add digit of the given number if it is greater than 10: 12 -> 1 + 2 = 3
    int sum = 0;
    int multiplyandsum = last_digit * 2;
    while (multiplyandsum > 0)
    {
        sum = sum + multiplyandsum % 10;
        multiplyandsum = multiplyandsum / 10;
    }
    return sum;
}

// Third intented function is to count how many digits each card has
int number_of_digits(long card_number)
{
    int count = 0;
    while (card_number > 0)
    {
        count++;
        card_number = card_number / 10;
    }
    return count;
}

// Fourth intented function is to find if it is really Amex
bool isValidAmex(long card_number, int numDigits)
{
    // pow is: pow(10, 13) -> 1,000,000,000,000,0
    int first_two_digits = card_number / pow(10, 13);
    if ((numDigits == 15) && (first_two_digits == 34 || first_two_digits == 37))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Fifth intented function is to find if it is really MasterCard
bool isValidMasterCard(long card_number, int numDigits)
{
    int first_two_digits = card_number / pow(10, 14);
    if ((numDigits == 16) && (first_two_digits > 50 && first_two_digits < 56))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Sixth intented function is to find if it is really Visa
bool isValidVisa(long card_number, int numDigits)
{
    if (numDigits == 13)
    {
        int first_digit = card_number / pow(10, 12);
        if (first_digit == 4)
        {
            return true;
        }
    }
    else if (numDigits == 16)
    {
        int first_digit = card_number / pow(10, 15);
        {
            return true;
        }
    }
    return false;
}

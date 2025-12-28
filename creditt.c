#include <cs50.h>
#include <stdio.h>

int calculate(int number);
int main(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while(number < 1);

    // Calculate card's digits
    int resultcalculate = calculate(number);
    // Find whether it is a American express or Mastercard or Visa
}

// Calculate card's digits
int calculate(int number)


// Find whether it is a American express or Mastercard or Visa
int whichcard(int card)

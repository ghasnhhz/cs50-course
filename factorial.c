#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int factorial(int number);

int main(void)
{
    int n = get_int("Enter a number: ");
    printf("%i\n", factorial(n));
}

int factorial(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}
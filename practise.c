#include <cs50.h>
#include <stdio.h>

void number(void);

int main(void)
{
    number();
}

void number(void)
{
    int i = get_int("What is your number: ");
    if (i == 7)
    {
        printf("Ooh nice number.\n");
    }
    else if (i == 8)
    {
        printf("Great number!\n");
    }
    else
    {
        printf("Your number is %i\n", i);
    }
}

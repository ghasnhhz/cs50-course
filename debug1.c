#include <cs50.h>
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

// Prompt the user for negative number
int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative number: ");
    }
    while (n >= 0);
    return n;
}
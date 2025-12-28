#include <cs50.h>
#include <stdio.h>

int plus(int j);

int main(void)
{
    int i = get_int("Give a number: ");
    int j = plus(i);
    printf("Your number is %i\n", j);
}

int plus(int j)
{
    return (j*5);
}

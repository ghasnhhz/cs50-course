#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number = 100;

    int hundred[number];

    for (int i = 0; i < number; i++)
    {
        hundred[i] = i;
        printf("hundred[%i] is %i\n", i, hundred[i]);
    }
}

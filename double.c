#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int size = get_int("Enter a size: ");
    int sequence[size];

    for (int i = 0; i < size; i++)
    {
        sequence[0] = 1;
        printf("%i\n", sequence[i]);
        sequence[i + 1] = sequence[i] * 2;
    }
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promtp the user for the length
    int length;
    do
    {
        length = get_int("Length: ");
    }
    while (length < 1);

    // Create an array of size that equals to the size of length
    int size[length];
    // First select odd numbers{1, 3, 5 ...}
    // Second select even numbers{2, 4, 6 ...}
}
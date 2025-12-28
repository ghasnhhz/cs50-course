#include <cs50.h>
#include <stdio.h>

void print_row(int a);

int main(void)
{
    // Prompt the user for the pyramid'height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        //Print row of bricks
        print_row(i + 1);
    }
}

void print_row(int a)
{
    // Print row of bricks
    for (int j = 0; j < a; j++)
    {
        printf("#");
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

void print_spaces(int spaces);
void print_bricks(int bricks);

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
        print_spaces(height - i - 1);
        print_bricks(i + 1);
    }
}

void print_spaces(int spaces)
{
    // Print spaces
    for (int j = 0; j < spaces; j++)
    {
        printf(".");
    }
}

void print_bricks(int bricks)
{
    // Print bricks
    for (int k = 0; k < bricks; k++)
    {
        printf("#");
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get size of grid = grid size that i type in the terminal window
    int n = get_int("Size: ");

    // Print grid of bricks = bricks that are placed to right and down
    for(int i = 0; i < n; i++)
    {
        for(int f = 0; f < n; f++)
        {
            printf("#");
        }
        printf("\n");
    }
}
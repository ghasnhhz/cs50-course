#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get size of grid = grid size that i type in the terminal window
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);

    // Print grid of bricks = Bricks that are placed to right and down
    for(int i = 0; i < n; i++)
        {
            for(int f = 0; f < n; f++)
            {
                printf("#");
            }
            printf("\n");
        }
}
#include <stdio.h>
#include <cs50.h>

void bricks(void);
int main(void)
{
     bricks();
}

void bricks(void)
{
    int n = get_int("How many bricks: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

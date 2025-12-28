#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter height size: ");

    } while (height < 1 || height > 8);

    // Not found yet
    for (int row = 0; row < height; row++)
    {
        for (int space = 0; space < height - row -1; space++)
        {
            printf(" ");
        }

        // Written below should be here
        for (int column = 0; column <= row; column++)
        {
            printf("#");

        }
        printf("  ");

        for(int column = 0; column <= row; column++)
        {
            printf("#");
        }printf("\n");
    }
}
        // This works first:For example:Is column less or equal to row (yes or no)/(1- column 0 and row 0 da yes equal; ok print # only once!!!! because if we print # again it is column > row.So 2- row 1 ga o'tadi va column 0da 1 ta # va column 1 da 1 ta # va column 2 ?? because column > row don bo'lodi)ĥ
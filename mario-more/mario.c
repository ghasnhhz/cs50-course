#include <cs50.h>
#include <stdio.h>

void pyramid1spaces(int spaces);
void pyramid1bricks(int bricks);
void space(int space);
void pyramid2(int bricks);

int main(void)
{
    // Prompt the user for height.
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Height of the pyramid
    for (int i = 0; i < height; i++)
    {
        // Right-aligned pyramid's spaces.
        pyramid1spaces(height - i - 1);

        // Right-alinged pyramid's bricks.
        pyramid1bricks(i + 1);

        // The space between the pyramids.
        space(1);

        // Left-aligned pyramid.
        pyramid2(i + 1);
    }
}

// Right-aligned pyramid's spaces.
void pyramid1spaces(int spaces)
{
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }
}

// Right-alinged pyramid's bricks.
void pyramid1bricks(int bricks)
{
    for (int k = 0; k < bricks; k++)
    {
        printf("#");
    }
}

// The space between the pyramids.
void space(int space)
{
    for (int l = 0; l < space; l++)
    {
        printf("  ");
    }
}

// Left-aligned pyramid.
void pyramid2(int bricks)
{
    for (int t = 0; t < bricks; t++)
    {
        printf("#");
    }
    printf("\n");
}

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int number = get_int("Enter a number: ");
    draw(number);
}

void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    draw(n - 1); // Draw pyramid of height n - 1

    // Draw one more row of width n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");

    // draw(n - 1); if i wrote this here, it would print 5 4 3 2 1
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x;
    int y;
    do
       {
        x = get_int("What's x: ");
        y = get_int("What's y: ");
       }
    while (x < 1 || y < 1);

    if (x > y)
    printf("x is greater than y\n");

    else if (x < y)
    printf("x is less than y\n");

    else
    printf("x is equal to y\n");
}

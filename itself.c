#include <cs50.h>
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main(void)
{
    int add = sum(10, 30);
    printf("Sum is: %i\n", add);
    return 0;
}
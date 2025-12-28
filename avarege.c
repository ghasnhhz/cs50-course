#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    //Now function call
    int i = add(10, 15);
    printf("Sum is: %d\n", i);
    return 0;
}

// Now function definition
int add(int a, int b)
{
    return a + b;
}
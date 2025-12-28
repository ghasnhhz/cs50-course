#include <cs50.h>
#include <stdio.h>

int foo(int x);

int foo(int x)
{
    int i = x*4;
    return i;
}
int main()
{
    int y = foo(4);
    printf("%i\n", y);
}

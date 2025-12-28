#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n); // %p allows us to view the "address" of a location in memory
    int *p = &n; // int *p creates a pointer whose job is to store the memory address of an integer
    printf("%p\n", p);

    printf("%i\n", *p); // *p means that it goes to the location of the value by its address
}

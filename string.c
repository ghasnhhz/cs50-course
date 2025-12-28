#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "HI!";
    printf("%p\n", s);  // "The name of the array (or the pointer to the first character)" serves as the address of the string.
                        // Prints the address of the string's first character
    printf("%p\n", &s[0]); // Or s + 1
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int a = get_int("A: ");
    int b = get_int("B: ");
    string s = get_string("C: ");

    // This is the address of a
    int *ap = &a;
    // *bp is holding the address of b, and we find the b trough bp which the pointer(address) to b
    int *bp = &b;
    //string *sp = &s; this would work as well

    printf("%p\n", ap);
    printf("%i\n", *bp);

    // s is the address of the whole string as it starts from the first character, so we do not need to write string *s = &s;
    printf("%p\n", s); // or *s[1]
    printf("%p\n", s + 1);
}




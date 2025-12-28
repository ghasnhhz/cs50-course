#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string number = get_string("What's your number?\n");
    printf("It is: %s\n", number);

    int size = get_int("Weight size: ");
    printf("It is: %i\n", size);
}
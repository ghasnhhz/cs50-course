#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? ");

    if (c == 'y' || c == 'Y')
    {
        int i = get_int("How many dollars: ");
        printf("It is: %i\n", i);
    }

    else if (c == 'z' || c == 'Z')
    {
        printf("Not agreed: \n");
    }

}

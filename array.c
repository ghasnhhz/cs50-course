#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for positive integer
    int length;
    do
    {
        length = get_int("Length: ");
    }
    while (length < 1);

    // Create an array of size that equals to length
    int twice [length];

    twice[0] = 1;
    printf("%i\n", twice[0]);


    for (int i = 1; i < length; i++)
    {
        //Make the current element twice the previous: twice[1] = 2*1=2;   twice[2] = 2*2=4; twice[3] = 2*4=8; ..........
         twice[i]= 2*twice[i - 1];
         printf("%i\n", twice[i]);
    }

}
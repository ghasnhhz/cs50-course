#include <stdio.h>
#include <cs50.h>
#include <string.h>

int array_of_integers[] = {5, 10, 1, 20, 15, 25, 30, 50, 35};

void linear_search(int number);

int main(void)
{
    int number = get_int("Which number: ");
    linear_search(number);
}

void linear_search(int number)
{
    for (int i = 0; i < 9; i++)
    {
        if (number == array_of_integers[i])
        {
             printf("VALID NUMBER! Your number is %i\n", number);
             return; //This exits the entire function while break just exits the current loop
        }
    }
    printf("INVALID NUMBER! \n");
}

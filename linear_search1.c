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
    bool found = false; // found is a boolean variable used to keep track of whether the number was found in the array
    for (int i = 0; i < 9; i++)
    {
        if (number == array_of_integers[i])
        {
            printf("VALID NUMBER! Your number is %i\n", number);
            found = true; //  updates found to true, indicating the number was located in the array.
            break; //This exits the current loop
        }
    }
    if (!found)
    {
        printf("INVALID NUMBER! \n");
    }
}

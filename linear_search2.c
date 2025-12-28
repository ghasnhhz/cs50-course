#include <cs50.h>
#include <stdio.h>
#include <string.h>

void linear_search(int array[], int n, int target);

int main(void)
{
    int target = get_int("Enter the target: ");

    int const n = 9;
    int array[] = {3, 1, 5, 4, 6, 2, 7, 8, 9};

    linear_search(array, n, target);
}

void linear_search(int array[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (target == array[i])
        {
            printf("Found %i, and it is at index %i of the array\n", target, i);
            return;
        }
    }
    printf("Target Not Found In The Array: \n");
}

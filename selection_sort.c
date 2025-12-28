#include <cs50.h>
#include <stdio.h>
#include <string.h>

void selection_sort(int unsorted[], int n);

int main(void)
{
    int n = 9; // Size of the array
    int unsorted[] = {3, 1, 5, 4, 6, 2, 7, 9, 8}; // Can write [n], but no need to do it;

    selection_sort(unsorted, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%i", unsorted[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int unsorted[], int n)
{
    // Loop over all elements except the last one
    for (int i = 0; i < n - 1; i++)
    {
        // Initialize the first element as the minimum
        int min_index = i; // If we initialize the min_index to 0, it would again start from 0 in the second outer iteration

        // Find the smallest element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (unsorted[j] < unsorted[min_index])
            {
                min_index = j; // Update the index of the minimum element
            }
        }


        // If the minimum element is not already at the correct position, swap it
        if (min_index != i)
        {
            int temp = unsorted[i];
            unsorted[i] = unsorted[min_index];
            unsorted[min_index] = temp;
        }
    }
}



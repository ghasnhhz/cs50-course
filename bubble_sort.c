#include <cs50.h>
#include <stdio.h>

void bubble_sort(int array[], int n);


int const n = 5;
int unsorted[n] = {5, 3, 8, 4, 2};
int sorted[n];

int main(void)
{
    bubble_sort(unsorted[n], n);
}

void bubble_sort(int unsorted[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (unsorted[j] > unsorted[j + 1])
            {
                int temp = sorted[j];
                sorted[j] = sorted[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

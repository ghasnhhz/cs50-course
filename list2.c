#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Usage: ./list2 1 2 ....\n");
        return 1;
    }

    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        int number = atoi(argv[i + 1]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // Free memory thus far
            return 2;
        }

        n -> number = number;
        n -> next = list;
        list = n;
    }

    // Printing the whole list
    node *pointer = list;
    while (pointer != NULL)
    {
        printf("%i\n", pointer->number);
        pointer = pointer->next;
    }
}

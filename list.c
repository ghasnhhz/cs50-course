#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    string phrase;
    struct node *next;
}
node;

int main(void)
{
    for (int i = 0; i < 2; i++)
    {
        node *list = NULL;

        string phrase = get_string("Enter a new phrase: ");
        node *n = malloc(sizeof(node));
        n->phrase = phrase;
        n->next = list;

    list = n;
    }
} // Not completed

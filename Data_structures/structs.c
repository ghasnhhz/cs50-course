#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

int main(void)
{
    int number = 5;
    node *n = malloc(sizeof(node));
    n->number = number;
    printf("%i\n", n->number);
}

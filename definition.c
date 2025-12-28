#include <cs50.h>
#include <stdio.h>
#include <string.h>

void definition(void);

int main(void)
{
    definition();
}

void definition(void)
{
    string name = get_string("Name: ");
    printf("Hello %s\n", name);
}

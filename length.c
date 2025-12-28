#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //Prompt for user's name
    string name = get_string("Name: ");

    //Count the number of caracters up until '\0' (aka nul)
   int length = strlen(name);
   printf("%i\n", length);
}
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string phrase = get_string("Enter a phrase: ");
    int length = strlen(phrase);
    // Why length - 1: since if i dont write like this, it will compare the last character and the one after that.
    for (int i = 0; i < length - 1; i++)
    {
        // Check if characters are NOT alphabetical
        if (phrase[i] > phrase[i + 1])
        {
            printf("NOT in alphabetical order\n");
            // By doing this i tell to my computer to stop the program as soon as it sees it
            return 0;
        }
    }
    // I should put this here as if i put it in if function with else, it would exit the programm if the first two characters are in alphabetical order
    // By doing this we can check all the characters
    printf("In alphabetical order\n");
    // By doing this i tell to my computer to stop/exit the program as soon as it sees it
    return 0;
}

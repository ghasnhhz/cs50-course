// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

string replace(string input);

int main(int argc, string argv[])
{
    // Now argc should be equal to 2.
    if (argc != 2)
    {
        printf("Usage: ./novowels word\n");
        return 1;
    }

    // Function call
    string word = argv[1];

    string result = replace(word);
    printf("%s\n", result);

}

// Function defenition: a becomes 6, e becomes 3, i becomes 1, o becomes 0 and u does not change.
string replace(string input)
{
    string output = input;

    for (int i = 0; i < strlen(input); i++)
    {
        char c = tolower(input[i]);

            switch (c)
        {
            case 'a':
                output[i] = '6';
                break;

            case 'e':
                output[i] = '3';
                break;

            case 'i':
                output[i] = '1';
                break;

            case 'o':
                output[i] = '0';
                break;

            default:
                output[i] = input[i];
                break;
        }
    }
    return output;
}

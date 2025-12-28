#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string s);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }

    // Before doing this function, arg[1] was a string even if i typed an integer. "atoi" (stdlib.h) changed it to an integer
    // Convert argv[1] from a 'string' to an 'int'
    int k = atoi(argv[1]);

    // Every character should be a digit
    bool digits = only_digits(argv[1]);
    {
        if (digits == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Prompt user for plaintext
    string plaintext = get_string("Plaintext: ");

    // For each character in the plaintext:
    printf("Ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        // Rotate the character if it is a letter
        char rotated_char = rotate(plaintext[i], k); // Pass one character at a time
        printf("%c", rotated_char);
    }
    printf("\n");
}

bool only_digits(string s)
{
    // Make sure every character in argv[1] is a digit
    for (int i = 0; i < strlen(s); i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}

char rotate(char c, int k)
{
    if (isupper(c))
    {
        // Do not write c instead of rotated variable here since c has been already declared in rotated function: It would be
        // variable shadowing, re-declaring a new variable.
        char rotated = (c - 65 + k) % 26 + 65;
        return rotated;
    }
    else if (islower(c))
    {
        char rotated = (c - 97 + k) % 26 + 97;
        return rotated;
    }
    else
    {
        return c;
    }
}
// check50 cs50/problems/2024/x/caesar

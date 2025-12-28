#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

char ciphertext(char plaintext_char, string key);

int main(int argc, string argv[])
{

    // Only one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key \n");
        return 1;
    }
    else if (strlen(argv[1]) != 26) // Must contain 26 characters
    {
        printf("Key must contain 26 characters. \n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("All characters must be alphabetical. \n");
            return 1;
        }

        for (int j = i + 1; j < 26; j++)
        {
            if (tolower(argv[1][j] == tolower(argv[1][i])))
            {
                printf("Must contain each letter only once. \n");
                return 1;
            }
        }
    }

    string plaintext = get_string("Plaintext: ");
    printf("Ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++)
    {
        char ciphertext_char = ciphertext(plaintext[i], argv[1]);
        printf("%c", ciphertext_char);
    }
    printf("\n");
}



char ciphertext(char plaintext_char, string key)
{
    if (isupper(plaintext_char))
    {
        char c = toupper(key[plaintext_char - 65]);
        return c;
    }
    else if (islower(plaintext_char))
    {
        char c = tolower(key[plaintext_char - 97]);
        return c;
    }
    else
    {
        return plaintext_char;
    }
}

#include <ctype.h>
#include <string.h>
#include <math.h>
#include <cs50.h>
#include <stdio.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

// Function call
int main(void)
{
    string text = get_string("Text: ");

    int letters_text = count_letters(text);

    {
        printf("Letters are:"  "%d\n", letters_text);
    }


    // Now print the number of words
    int words_text = count_words(text);

    {
        printf("Words are:" "%d\n", words_text);
    }

    {
        printf("Grade 16+");
    }

    else if (index < 1)
    {
        printf("Before Grade 1");
    }

    else
    {
        printf("Grade %i", index);
    }
    printf("\n");
    return 0;
}

// Function defenition
int count_letters(string text)
{
    int letters = 0;

    for (int i = 0; i < text[i]; i++)
    {
        if (isalpha(text[i]))
        {
           letters = letters + 1;
        }
    }
    return letters;
}

// Now we need to calculate number of words: a sentence will
// contain at least one word
// not start or end with a space: and multiple spaces in a row
int count_words(string text)
{
    int words = 1;

    for (int i = 0; i < text[i]; i++)
    {
        if (text[i] == ' ')
        {
            words = words + 1;
        }
    }
    return words;
}

// Now it is time to calculate number of sentences
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0; i < text[i]; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences = sentences + 1;
        }
    }
    return sentences;
}

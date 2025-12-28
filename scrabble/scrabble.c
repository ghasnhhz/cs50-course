#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_scores(string words);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int scores1 = compute_scores(word1);
    int scores2 = compute_scores(word2);

    // TODO: Print the winner
    if (scores1 > scores2)
    {
        printf("Player1 wins! \n");
    }
    else if (scores1 < scores2)
    {
        printf("Player2 wins! \n");
    }
    else
    {
        printf("Tie! \n");
    }
}

int compute_scores(string words)
{
    int add = 0;
    // TODO: Compute and return score for string
    for (int i = 0; i < strlen(words); i++)
    {
        if(isupper(words[i]))
        {
            add = add + POINTS[words[i] - 65];
        }
        if (islower(words[i]))
        {
            add = add + POINTS[words[i] - 97];
        }
    }
    return add;
}



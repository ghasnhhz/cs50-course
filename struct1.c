#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string winner;
    string loser;
}
pair;

int const n = 2;
pair pairs[n];

int main(void)
{
    for(int i = 0; i < n; i++)
    {
        string winner = get_string("Who is the winner: ");
        string loser = get_string("Who is the loser: ");
        pairs[i].winner = winner;
        pairs[i].loser = loser;
    }

    printf("Winners: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%s\n", pairs[j].winner);
    }

    printf("Losers: \n");
    for (int j = 0; j < n; j++)
    {
        printf("%s\n", pairs[j].loser);
    }
}

// printf("The winner %i is %s, and the loser %i is %s\n", j + 1, pairs[j].winner, j + 1, pairs[j].loser);

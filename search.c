#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(void)
{
    const int num_candidates = 3;
    candidate candidates[num_candidates];
    candidates[0].name = "Shahzod";
    candidates[0].votes = 20;

    candidates[1].name = "Shoxruh";
    candidates[1].votes = 19;

    candidates[2].name = "Dostonbek";
    candidates[2].votes = 18;

    int highest_votes = 0;

    for(int i = 0; i < num_candidates; i++)
    {
        if (candidates[i].votes > highest_votes)
        {
            highest_votes = candidates[i].votes;
        }
    }
    printf("%i\n", highest_votes);

    for (int i = 0; i < num_candidates; i++)
    {
        if (highest_votes == candidates[i].votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
}

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidate(string prompt);

int main(void)
{

    candidate president = get_candidate("Enter a name: ");

    printf("Candidate is %s:\n", president.name);
    printf("His votes are %i:\n", president.votes);
}


candidate get_candidate(string prompt)
{

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_int("Votes: ");
    return c;
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int Scores[3];
    for (int i = 0; i < 3; i++)
    {
        Scores[i] = get_int("Scores: ");
    }

    // Avarage
    printf("%f\n", (Scores[0] + Scores[1] + Scores[2])/3.0);
}
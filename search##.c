#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];
    // If want,  can be omitted
    person numbers[2];

    people[0].name = "sHahzod";
    numbers[0].number = "94 088 20 25";

    people[1].name = "Azizbek";
    numbers[1].number = "94 088 77 77";

    string s = get_string("Name: ");

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("Found %s\n", numbers[i].number);
            return 0;
        }
    }
    printf("Not Found");
    return 1;
}
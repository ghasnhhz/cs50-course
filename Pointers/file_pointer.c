#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int n = 18;

    FILE* demo = fopen("file1.txt", "r");
    if (demo == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fread(demo, sizeof(char), 1, file.txt);

    for (int i = 0; i < n; i++)
    {
        printf("Character %i: %i", i + 1, demo[i]);
    }
    printf("\n");
}


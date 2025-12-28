#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        printf("Usage: ./mario number \n");
        return 1;
    }
    else
    {
        int height = atoi(argv[1]);
        printf("%s\n", argv[1]);
    }
}

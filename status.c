#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    //Here argc is the number of words in terminal window: ./status Shahzod means argc == 2;
    if ( argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1;
    }
    else
    {
        // Here argv is first word of sentence: argv[1] => shows Shahzod  of Shahzod Karimov;
        printf("Hello, %s\n", argv[1]);
        return 0;
    }
}
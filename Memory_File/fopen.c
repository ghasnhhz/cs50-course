#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // I used input for reading and output for writing
    FILE *input = fopen("file.txt", "r");
    if (input == NULL)
    {
        // Error handling if file can not be opened
        printf("Could not open input\n");
        return 1;
    }

    // We are opening a file called file2.txt and *output pointer that stores the address of
    FILE *output = fopen("file2.txt", "w");
    if (output == NULL)
    {
        // Error handling if file can not be opened
        printf("Could not open output\n");
        return 2;
    }

    // Creating an array because ....
    char buffer[18]; // 16 characters + 1 for null terminator

    // We are temporarily moving the data to a buffer
    size_t bytesRead = fread(buffer, sizeof(char), 18, input);
    if (bytesRead == 0)
    {
        printf("Error reading from input file\n");
        fclose(input);
        fclose(output);
        return 3;
    }

    // Null-terminate the string after reading
    buffer[bytesRead] = '\0';

    // Writing the data that is inside of "file.txt" to "file2.txt" file
    size_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, output);
    if (bytesWritten != bytesRead)
    {
        printf("Error writing to output file\n");
        fclose(input);
        fclose(output);
        return 4;
    }

    // Closing both files in order to free the used memory
    fclose(input);
    fclose(output);
}

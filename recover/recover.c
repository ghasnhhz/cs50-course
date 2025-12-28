#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Define a byte type
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Accept a single command-line argument
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    // Open the memory card
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open a file \n");
        return 2;
    }

    // Create a buffer for a block of data
    BYTE buffer[512];

    FILE *img = NULL;          // Pointer to the current JPEG file
    char filename[8];          // Buffer to store the filename
    int file_count = 0;        // Counter for the JPEG files found


    // While there's still data left to read from the memory card
    while (fread(buffer, 1, 512, card) == 512)
    {
        // Check if the block is the beginning of a new JPEG file
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            // If a JPEG  is already open close it
            if (img != NULL)
            {
                fclose(img);
            }

            // Create a new file for the new JPEG
            sprintf(filename, "%03i.jpg", file_count);
            file_count++;

            img = fopen(filename, "wb"); // Open the new file in binary write mode
            if (img == NULL)
            {
                printf("Could not create file %s.\n", filename);
                fclose(card);
                return 3;
            }
        }

        // If a JPEG file is open, write the block to it
        if (img != NULL)
        {
            fwrite(buffer, sizeof(BYTE), 512, img);
        }
    }

    // Close any remaining open files
    if (img != NULL)
    {
        fclose(img);  // Close the last JPEG file
    }
    fclose(card); // Close the memory card

    return 0;
}

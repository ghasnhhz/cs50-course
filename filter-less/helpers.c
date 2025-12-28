#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Take average of red, green, and blue;
            float average = (image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0;
            int roundedAverage = round(average);
            // Update pixel values
            image[i][j].rgbtRed = roundedAverage;
            image[i][j].rgbtGreen = roundedAverage;
            image[i][j].rgbtBlue = roundedAverage;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Compute sepia values
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            // Update pixel with sepia values
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            // Swap pixels
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][width - (j + 1)];
            image[i][width - (j + 1)] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Create a copy of image
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j] = image[i][j];
        }
    }

    // We created a copy of image unless the new pixel would affect the next pixels
        // When new pixel is done, we assign it to image[i][j], while copy[i][j] is used during calculations
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                int totalRed, totalGreen, totalBlue;
                totalRed = totalGreen = totalBlue = 0;
                float counter = 0.00;

                // Get neighouring pixels
                for (int x = -1; x < 2; x++)
                {
                    for (int y = -1; y < 2; y++)
                    {
                        int currentX = i + x;
                        // I found the bug myself. If it was i, it would be incorrect
                        int currentY = j + y;

                        // Check if neighbouring pixel is valid
                        if (currentX < 0 || currentX > (height - 1) || currentY < 0 || currentY > (width - 1))
                        {
                            continue;
                        }

                        // Get image value
                        totalRed += image[currentX][currentY].rgbtRed;
                        totalGreen += image[currentX][currentY].rgbtGreen;
                        totalBlue += image[currentX][currentY].rgbtBlue;

                        counter++;
                    }
                }
                // Calcultate average of neighbouring pixels
                copy[i][j].rgbtRed = round(totalRed / counter);
                copy[i][j].rgbtGreen = round(totalGreen / counter);
                copy[i][j].rgbtBlue = round(totalBlue / counter);
            }
        }

        // Copy new pixels into original image
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                image[i][j].rgbtRed = copy[i][j].rgbtRed;
                image[i][j].rgbtGreen = copy[i][j].rgbtGreen;
                image[i][j].rgbtBlue = copy[i][j].rgbtBlue;
            }
        }
        return;
}

// ./filter -g infile.bmp outfile.bmp

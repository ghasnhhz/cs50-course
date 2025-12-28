// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table

node *table[N];

int dict_size = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Hash word to obtain hash value
    int hash_value = hash(word);

    // Access linked list at that index in hash table
    node *n = table[hash_value];

    // Traverse linked list, looking for word
    while (n != NULL)
    {
        if (strcasecmp(word, n->word) == 0)
        {
            return true;
        }

        n = n->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    unsigned long total = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        total += tolower(word[i]);
    }
    return total % N;

}
// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open the dictionary file
    FILE *source = fopen(dictionary, "r");
    if (source == NULL)
    {
        printf("Could not open file \n");
        return false;
    }

    // Initialize the hash table
    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }

    // Initialise word array
    char next_word[LENGTH + 1];

    // Read each word in the file
    while (fscanf(source, "%s", next_word) != EOF)
    {
        // Create new node for each word
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }

         // Copy word into node using strcopy
        strcpy(n->word, next_word);

        // Hash word to obtain hash value
        int hash_value = hash(next_word);

        // Insert node into hash table at that location
        n->next = table[hash_value];
        table[hash_value] = n;

        // Inrement dictionary size
        dict_size++;
    }

    // Close the dictionary file
    fclose(source);
    return true; // Success
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // Return number of words in dictionary if loaded else 0 if not yet loaded
    return dict_size;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Iterate over hash table and free nodes in each linked list
    for (int i = 0; i < N; i++)
    {
        // Assign cursor
        node *n = table[i];

        // Loop through linked list
        while (n != NULL)
        {
            // Make temp equal cursor
            node *temp = n;

            // Point cursor to next element
            n = n->next;

            // Free temp
            free(temp);
        }

        if (n == NULL && i == N - 1)
        {
            return true;
        }
    }
    return false;
}

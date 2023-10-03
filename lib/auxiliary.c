#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "auxiliary.h"

// XORs two arrays and puts the result in a third array.
// Assumes all arrays have the same given length.
uint8_t *xor_arrays(uint8_t *array1, uint8_t *array2, size_t length)
{
 //   size_t length = sizeof(array1) / sizeof(array1[0]);
    uint8_t *result = malloc(length * sizeof(uint8_t));

    for (size_t i = 0; i < length; i++)
    {
        result[i] = array1[i] ^ array2[i];
    }

    return result;
}

// Key Expansion: repeating the key
char *expand_key(char *key, size_t length)
{
    size_t key_length = strlen(key);
    char* expanded_key = malloc((length + 1) * sizeof(char));  // +1 for the null-terminator

   for (size_t i = 0; i < length; i++)
    {
        expanded_key[i] = key[i % key_length];
    }

    expanded_key[length] = '\0';  // Null-terminate the extended key

    return expanded_key;
}

// Converts a string to a byte array.
// Assumes the destination array is large enough to hold the string.
uint8_t *get_array_from_string(const char *str)
{
    size_t length = strlen(str);

    // Allocate memory for the result array
    uint8_t *result = (uint8_t *)malloc(length * sizeof(uint8_t));

    // Check if memory allocation was successful
    if (result == NULL)
    {
        // Handle memory allocation failure, e.g., return NULL or exit
        return NULL;
    }

    for (size_t i = 0; i < length; i++)
    {
        result[i] = (uint8_t)str[i];
    }

    return result;
}

void print_array(uint8_t *array, size_t length, char *format)
{
    for (size_t i = 0; i < length; i++)
    {
        printf(format, array[i]);
        printf(" ");
    }

    printf("\n");
}

void print_array_dec(uint8_t *array, size_t length)
{
    print_array(array, length, "%u");
}

void print_array_hex(uint8_t *array, size_t length)
{
    print_array(array, length, "%02X");
}

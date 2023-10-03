#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "auxiliary.h"

// XORs two arrays and puts the result in a third array.
// Assumes all arrays have the same given length.
void xor_arrays(uint8_t *array1, uint8_t *array2, uint8_t *result, size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        result[i] = array1[i] ^ array2[i];
    }
}

// Converts a string to a byte array.
// Assumes the destination array is large enough to hold the string.
void get_array_from_string(const char *str, uint8_t *dest)
{
    size_t length = strlen(str);
    for (size_t i = 0; i < length; i++)
    {
        dest[i] = (uint8_t)str[i];
    }
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
    print_array(array, length, "%02x");
}

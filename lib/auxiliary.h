#ifndef AUXILIARY_H
#define AUXILIARY_H

#include <stdint.h>
#include <stddef.h>

char *expand_key(char *key, size_t length);
uint8_t *xor_arrays(uint8_t *array1, uint8_t *array2, size_t length);
uint8_t *get_array_from_string(const char *str);
void print_array(uint8_t *array, size_t length, char* format);
void print_array_dec(uint8_t *array, size_t length);
void print_array_hex(uint8_t *array, size_t length);

#endif // AUXILIARY_H

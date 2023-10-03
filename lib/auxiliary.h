#ifndef AUXILIARY_H
#define AUXILIARY_H

#include <stdint.h>
#include <stddef.h>

void xor_arrays(uint8_t* array1, uint8_t* array2, uint8_t* result, size_t length);
void get_array_from_string(const char* str, uint8_t* dest);
void print_array(uint8_t *array, size_t length, char* format);
void print_array_dec(uint8_t *array, size_t length);
void print_array_hex(uint8_t *array, size_t length);

#endif // AUXILIARY_H

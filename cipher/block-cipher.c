#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "../lib/auxiliary.h"

int main() {
    char* plainText = "Hello World!";
    size_t plainTextLength = strlen(plainText);
    uint8_t plainBytes[plainTextLength];

    get_array_from_string(plainText, plainBytes);

    print_array_dec(plainBytes, plainTextLength);
    print_array_hex(plainBytes, plainTextLength);

     // Newline after printing all bytes
    printf("\n");
    return 0;
}

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/auxiliary.h"

char* encrypt(char* plainText, char* key)
{
    size_t plainTextLength = strlen(plainText);
    char *expanded_key = expand_key(key, plainTextLength);
    size_t keyLength = strlen(expanded_key);

    uint8_t *plainBytes = get_array_from_string(plainText);
    uint8_t *keyBytes = get_array_from_string(expanded_key);

    uint8_t * result = xor_arrays(plainBytes, keyBytes, plainTextLength);

    print_array_hex(result, plainTextLength);

    // Free the allocated memory when done
    free(expanded_key);
    free(plainBytes);
    free(keyBytes);
    free(result);

    return "";
}

int main() {
    char* plainText = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    char* key = "Passw1234";
    encrypt(plainText, key);

//    print_array_dec(plainBytes, plainTextLength);
//    print_array_hex(plainBytes, plainTextLength);

     // Newline after printing all bytes
    printf("\n");
    return 0;
}

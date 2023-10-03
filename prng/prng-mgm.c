/*
 * The middle-square method
 * ------------------------------
 * The method was invented by John von Neumann, and was described by him at a conference in 1949.
 *
 ****************************************************************************
 * DISCLAIMER                                                               *
 * This code is provided solely for demonstration and educational purposes. *
 * It is not intended for production use. Nonetheless, you are free to use, *
 * modify, and distribute it as you see fit, but do so at your own risk."   *
 ****************************************************************************
 *
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// initial seed
uint16_t seed = 0;

uint16_t middle_square() {
    // Extract middle 4 digits from the seed * seed
    seed = (seed * seed / 100) % 10000;
    return seed;
}

int main() {

    // Initialize seed
    seed = 1234;

    // Print 10 random numbers
    for(int i = 0; i < 10; i++) {
        printf("%lu\n", middle_square());
    }
    return 0;
}
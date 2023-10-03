/*
 * Linear congruential generator.
 * ------------------------------
 * The method represents one of the oldest and best-known pseudorandom number generator algorithms.
 * It is calculated based on formula: X_{n+1} = (a * X_n + c) % m
 * A, C, M are constants that are chosen by the developer. There is a list of recommended good constants.
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

#define A 1664525
#define C 1013904223
#define M 4294967296 // 2^32

// Default Initial seed
unsigned long seed = 0;

unsigned long lcg() {
    seed = (A * seed + C) % M;
    return seed;
}

int main() {

    // Initialize seed
    seed = 1234;

    // Print 10 random numbers
    for(int i = 0; i < 10; i++) {
        printf("%lu\n", lcg());
    }
    return 0;
}

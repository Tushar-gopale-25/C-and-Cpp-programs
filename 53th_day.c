// C Program to Clear a given bit of a binary number
#include <stdio.h>

int main()
{
    // Binary: 01100111
    unsigned int num = 103;

    // Clearing the 5th bit (0-based index)
    unsigned int bit_position = 4;

    // Create a mask with only the 5th bit set to 0
    unsigned int mask = ~(1 << bit_position);

    // Clear the bit using AND
    num = num & mask;

    // Print the result
    printf("Result: %u\n", num);

    return 0;
}
/*
12. Bit Spreading Interleave Bits with Zeros

In some protocols or hardware applications (e.g. graphic rendering, signal encoding), bit spreading or interleaving is used to insert 0s between the bits of a value for purposes like data alignment or transmission.

You are given an 8-bit number, and your task is to:

    Spread the bits such that each bit is followed by a 0
    The result will be a 16-bit number where each original bit occupies even positions (0, 2, 4…)
    All odd positions are 0s
*/

#include <stdio.h>
#include <stdint.h>



uint16_t spread_bits(uint8_t val) {
    // Your logic here
    uint16_t new_val = 0;
    for(int i = 0 ; i < 8 ; i++){
        // extract i-bit
        uint8_t bit = (val >> i) & 1;
        printf("%u\n", bit); 

        if(val & (1 << i)){
            new_val |= (1 << (i * 2));
        }
    }

    return new_val;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}
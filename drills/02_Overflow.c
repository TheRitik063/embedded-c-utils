#include<stdio.h>
#include<stdint.h>
int main(){
    // Integer overflow example 
    uint8_t a = 255; 
    a++; // The integer can only hold values from 0 to 255. This will cause an overflow and wrap around to 0. 255 + 1 = 256, but since the maximum value for uint8_t is 255, it wraps around to 0.
    printf("a = %u\n", a);

    // Integer underflow example   
    uint8_t b = 0;
    b--; // The integer can only hold values from 0 to 255. This will cause an underflow and wrap around to 255. 0 - 1 = -1, but since the minimum value for uint8_t is 0, it wraps around to 255.
    printf("b = %u\n", b);

    // Integer Promotion example
    uint8_t c = 100;
    uint8_t d = 200;
    uint16_t e = c + d; // The result of adding two uint8_t values is promoted to int(before adding), which can hold larger values. The result is 300, which fits in a uint16_t.
    printf("e = %u\n", e);
    uint8_t f = c+d; // The result of adding two uint8_t values is promoted to int(before adding), which can hold larger values. The result is 300, which does not fit in a uint8_t, so it wraps around to 44 (300 - 256 = 44).
    printf("f = %u\n", f);

    return 0;
}
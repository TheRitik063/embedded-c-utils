#include <stdio.h>
#include <stdint.h>

int main(void)
{
    printf("===== C DATA TYPE SIZES =====\n\n");

    printf("char       : %zu bytes\n", sizeof(char));
    printf("short      : %zu bytes\n", sizeof(short));
    printf("int        : %zu bytes\n", sizeof(int));
    printf("long       : %zu bytes\n", sizeof(long));
    printf("long long  : %zu bytes\n", sizeof(long long));

    printf("float      : %zu bytes\n", sizeof(float));
    printf("double     : %zu bytes\n", sizeof(double));

    printf("\n===== FIXED WIDTH TYPES =====\n\n");

    printf("uint8_t    : %zu bytes\n", sizeof(uint8_t));
    printf("uint16_t   : %zu bytes\n", sizeof(uint16_t));
    printf("uint32_t   : %zu bytes\n", sizeof(uint32_t));
    printf("uint64_t   : %zu bytes\n", sizeof(uint64_t));

    printf("\n===== POINTER SIZE =====\n\n");

    printf("void pointer: %zu bytes\n", sizeof(void *));

    printf("int    : %zu bytes\n",sizeof(int));
    return 0;
}
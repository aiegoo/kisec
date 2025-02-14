#include <stdio.h>

int main(void) {
    int a = 2147483647; // Maximum value for a 32-bit signed integer
    short b = 65536;    // Maximum value for a 16-bit signed integer
    long c = 2147483648; // Value within the range of a 32-bit signed long

    printf("int: %d\n", a);
    printf("short: %d\n", b);
    printf("long: %ld\n", c);

    return 0;
}
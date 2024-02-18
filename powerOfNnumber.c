
/*
Write a C program to find power of a number using for loop.
How to find  without using built in libray functions in C program.
Logic to find power of any number without using pow() function in C programming.

Input:
    Input base: 2
Input exponent: 5
    Output: 2^5 = 32
*/

#include <stdio.h>

int main() {
    int base, exponent;
    int result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    printf("%d raised to the power of %d is %lld", base, exponent, result);

    return 0;
}

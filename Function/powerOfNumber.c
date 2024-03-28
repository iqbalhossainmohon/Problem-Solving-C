
/*

Input:
    Input base: 2
Input exponent: 5
    Output: 2^5 = 32
*/

#include <stdio.h>

int power(int base, int power){
    int result = 1.0;

    for(int i = 0; i< power; i++){
        result = result * base;
    }
    return result;
}

int main() {
    int base, exponent, result;

    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = power(base, exponent);

    printf("'%d' raised to the power of '%d' is: %d", base, exponent, result);

    return 0;
}

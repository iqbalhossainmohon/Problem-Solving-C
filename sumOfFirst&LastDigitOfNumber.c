
///Write a C program to find sum of first and last digit of a number.

/*
Input:
    Enter a number: 12334
Output:
    Sum of first and last digit: 5
*/



#include <stdio.h>

int main() {
    int number, first_digit, last_digit, sum;
    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    first_digit = number;

    sum = first_digit + last_digit;

    printf("Sum of first and last digit: %d, %d, %d\n", first_digit, last_digit, sum);

    return 0;
}

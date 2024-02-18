
///Write a C program to find first and last digit of a number.

/*
Input:
    Enter a number: 1234

Output:
    First digit: 1
    Last digit: 4
*/



#include <stdio.h>

int main() {
    int number, first_digit, last_digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    last_digit = number % 10;

    while (number >= 10) {
        number /= 10;
    }
    first_digit = number;
    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);

    return 0;
}

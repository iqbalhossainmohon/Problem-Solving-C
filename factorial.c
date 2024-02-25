
/*
Write a C program to input a number and calculate its factorial using for loop.
How to find factorial of a number in C program using loop. Logic to find factorial
of a number in C programming.

Input:
    Input number: 5
Output :
    Factorial number: 120
*/

#include <stdio.h>

int main() {
    int number;
    int factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", & number);

    if (number < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= number; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d", number, factorial);
        return 0;
    }
}

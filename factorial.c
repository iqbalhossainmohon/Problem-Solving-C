
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
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu", num, factorial);
        return 0;
    }
}

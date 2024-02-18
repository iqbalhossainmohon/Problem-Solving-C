
/* Write a C program to input a number from user and find all factors of the given number using for loop.
How to find factors of a number in C program. Logic to find all factors of a given number in C programming.

Input:
    Input number: 12
Output:
    Factors of 12: 1, 2, 3, 4, 6, 12
*/

#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

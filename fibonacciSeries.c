
/*
Write a C program to print Fibonacci series up to n tems using loop. How to generate
Fibonacci series up to n terms using loop in C programming. Logic to print
Fibonacci series in a given range in C programming.

Input:
    Input number of terms: 10
Output:
    Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
*/

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //printf("Fibonacci Series up to %d terms:\n", n);


    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    return 0;
}

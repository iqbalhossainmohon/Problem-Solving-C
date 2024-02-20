
/*
///Write a C program to print all natural numbers in reverse from n to 1 using for loop.

Input:
    Input N: 10
Output:
    Natural numbers from 10-1 in reverse: 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
*/

#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print natural numbers in reverse order from n to 1
    printf("Natural numbers from %d to 1 in reverse order:\n", n);
    for(int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}


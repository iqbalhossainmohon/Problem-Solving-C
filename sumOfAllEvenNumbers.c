
///Write a C program to find sum of all even numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}

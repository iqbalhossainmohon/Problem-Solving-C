/*  write  a C program that sums even and odd numbers from 1 to n.
    The program checks if n is even and returns the sum of even numbers
    and if n is odd  returns the sum of odd numbers.
*/

#include <stdio.h>

int main() {
    int n, sumEven = 0, sumOdd = 0;

    printf("Give the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven = sumEven + i;
        } else {
            sumOdd = sumOdd + i;
        }
    }

    if (n % 2 == 0) {
        printf("Sum of even numbers: %d\n", sumEven);
    } else {
        printf("Sum of Odd number: %d\n", sumOdd);
    }

    return 0;
}

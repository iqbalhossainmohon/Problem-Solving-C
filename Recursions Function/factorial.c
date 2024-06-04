/// Given an integer N. Construct a c Program to find factorial of N using recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    else{
     return n * factorial(n - 1);
    }
}

int main() {
    int N, result;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = factorial(N);
        printf("Factorial of %d is: %d\n", N, result);
    }

    return 0;
}

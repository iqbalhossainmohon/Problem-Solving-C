
///Compute multiplication table of a given integer

#include <stdio.h>

int main() {
    int i, n;

    printf("Input the multiplication of number: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d \n", n, i, n * i);
    }
}

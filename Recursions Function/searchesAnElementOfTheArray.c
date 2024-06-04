/// Write a C program to input elements in an array and search whether an element exists in the array or not.

#include <stdio.h>

int main() {
    int n, arr[109], i, searchElement, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter Input %d Elements:\n", n);
    for (i = 0; i < n; i++) {
            printf("Input Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d exists in the array at index %d.\n", searchElement, i);
    } else {
        printf("%d does not exist in the array.\n", searchElement);
    }

    return 0;
}

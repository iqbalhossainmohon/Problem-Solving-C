
/// 2. write a C program to add two numbers using pointers.
/// 3. write a C program to input and print array elements using pointers.

/// 4. write a C program to swap two number using pointers.


#include <stdio.h>

int main() {
    int num1 = 5, num2 = 10;
    int *ptr1, *ptr2, temp;
    //int *ptr1;
    //int *ptr2;
     ptr1 = &num1;
     ptr2 = &num2;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

}


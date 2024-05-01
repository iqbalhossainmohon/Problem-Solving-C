/// 1. write a C program to create initialize and use pointers.

#include <stdio.h>

int main() {
    int num = 10; // Declare and initialize an integer variable
    int *ptr;     // Declare an integer pointer

    ptr = &num;   // Assign the address of num to ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %x\n", &num);
    printf("Value of ptr: %p\n", ptr);  // Print the value of ptr (address of num)
    printf("Value pointed to by ptr: %d\n", *ptr);  // Print the value pointed to by ptr (value of num)

    // Changing the value of num indirectly through ptr
    *ptr = 20;

    printf("New value of num: %d\n", num);

}

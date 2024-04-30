/// Write a Program to add all element of an array using pointer?

#include <stdio.h>
main(){
    int n, array[100], *ptr, sum=0;

    printf("please Enter a Number: ");
    scanf("%d", &n);
        for(int i=0; i<n; i++){
            printf("Please Enter a Value ==> %d: ", i+1);
            scanf("%d", &array[i]);
        }
        ptr = array;

        for(int j=0; j<n; j++){
            sum = sum + *ptr;
            ptr++;
        }
        printf("Sum of all Elements: %d", sum);
}

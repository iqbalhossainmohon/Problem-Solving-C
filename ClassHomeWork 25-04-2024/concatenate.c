/// Write a C program to concatenate two strings.

#include<stdio.h>

main(){
    char a[109], b[109];
    printf("Enter First string: ");
    gets(a);
    printf("Enter Second string: ");
    gets(b);

    strcat(a,b);
    printf("Concatenate two Strings: %s\n", a);
}

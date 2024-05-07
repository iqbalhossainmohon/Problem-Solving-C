/// Write a C program to compare two strings.

#include <stdio.h>

main(){
    char str1[109], str2[109];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("First string is smaller\n");
    } else {
        printf("First string greater than second string\n");
    }

}


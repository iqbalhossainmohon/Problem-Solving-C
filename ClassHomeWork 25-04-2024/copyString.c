/// Write a C program to copy one string to another string.

#include <stdio.h>

main(){
    char string[109], copy[109];
    printf("Enter a string: ");
    gets(string);

    strcpy (copy, string);
    //printf("Copied string: %s\n", copy);
    printf("Copied string: ");
    puts(copy);

}

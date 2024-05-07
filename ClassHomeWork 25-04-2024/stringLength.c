/// Write a C program to find length of a string.

#include<stdio.h>

    main(){
        int length;
        char len[109];
        printf("Enter a string: ");
        gets(len);

        length = strlen(len);
        printf("Length of the string: %d\n", length);

}

/// write a c program to reverse a string.

#include<stdio.h>

main(){
    int i;
     char str[109];
        printf("Enter a string: ");
     gets (str);

     int n = strlen(str);

     for(i=n; i>=0; i--){
        printf("%c", str[i]);
     }
}

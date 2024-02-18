
#include<stdio.h>
main(){
    int number, count = 0;
    printf("Enter a Number: ");
    scanf("%d", & number);

    while(number !=0){
        number/=10;
        count ++;
    }
    printf("Number of digits: %d\n", count);
}





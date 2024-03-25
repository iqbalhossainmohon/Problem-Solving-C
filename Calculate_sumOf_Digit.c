/*
    Input: 1234
        1+2+3+4=10
    Output: 10
*/

#include <stdio.h>

main(){
    int number, digit, sum = 0;

    printf("Enter a Number: ");
    scanf("%d", &number);

    while(number !=0){
        digit = number % 10;
        sum = sum + digit;
        number = number /10;
    }
    printf("Sum of digits: %d\n", sum);
}

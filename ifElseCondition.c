/*
write a program that will read the value of a variable called "num"
and print out one of the following messages depending on the value assigned to "num".

    * print "EXCELLENT" if the value of "num" is greater than equal 80.
    * print "GOOOOOOOOD" if the value of "num" is greater than equal 50.
    * Otherwise print "BAD" if the value of "num" is less than 50
*/


#include<stdio.h>
main(){
    int num;
    printf("Please Enter a Number: ");
    scanf("%d", & num);

    if(num>=80){
        printf("EXCELLENT");
    }
    else if(num>=50){
        printf("GOOOOOOOOD");
    }
    else{
        printf("BAD");
    }
}

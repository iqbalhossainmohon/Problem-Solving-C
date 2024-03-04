#include<stdio.h>
main(){
    int num;
    printf("Please Enter a Number: ");
    scanf("%d", & num);

    if(num>=80){
        printf("EXCELLENT");
    }
    else if(num>=50){
        printf("GOOD");
    }
    else{
        printf("BAD");
    }



}

#include<stdio.h>
main()
{
int i, sum = 0;
 //int sum=0;
for(i=1;i<=10;i=i+1){
    if(i%2==0){
        sum=sum+i;
    }
    else{
            sum=sum-i;
    }
}
    printf("Sum= %d", sum);
}

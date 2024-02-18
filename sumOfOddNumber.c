
/*#include<stdio.h>
main(){
    int m, n, sum = 0;
    printf("Enter a Number M: ");
    scanf("%d", &m);
     printf("Enter a Number N: ");
    scanf("%d", &n);
    for(int i = m; i<=n; i++){
        if(i% 2 !=0){
            sum = sum+i;
        }
    }
    printf("Sum of all Odd Number from %d to %d is: %d",m, n, sum);
}*/


#include<stdio.h>
main(){
    int m, n, sum = 0;
    printf("Enter a Number M: ");
    scanf("%d", &m);
     printf("Enter a Number N: ");
    scanf("%d", &n);
    for(int i = m +1; i<=n; i++){
        if(i% 2){
            sum = sum+i;
        }
    }
    printf("Sum of all Odd Number from %d to %d is: %d",m, n, sum);
}





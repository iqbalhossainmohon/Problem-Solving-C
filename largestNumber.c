#include<stdio.h>
main(){
   int m= 3, n= 15, o= 1;

   if(m>n && m>o){
    printf("Largest Number is: %d", m);
   }
   else if(n>m && n>o){
    printf("Largest Number is: %d", n);
   }
   else{
    printf("Largest Number is: %d", o);
   }
}

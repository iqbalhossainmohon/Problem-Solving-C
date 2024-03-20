
/// Write c program to output large number using function.

#include <stdio.h>

int findLarger(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }

}

main(){
    int num1, num2;
    printf("Enter this Number: ");
    scanf("%d %d", & num1, & num2);

    int MaxNumber = findLarger(num1, num2);
    printf("Largest Number is: %d\n", MaxNumber);

return 0;
}

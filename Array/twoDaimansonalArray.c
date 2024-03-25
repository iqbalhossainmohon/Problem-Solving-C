
#include <stdio.h>

main() {
    int x[2][5];
    int sum = 0;

    for(int i = 0; i<2; i++){
        for(int j = 0; j<5; j++){
            printf("Please Enter a Numbers: ");
            scanf("%d", & x[i][j]);

            sum = sum + x[i][j];
        }
    }
    printf("Sum of Tow Daimansonal: %d", sum);
    return 0;
}

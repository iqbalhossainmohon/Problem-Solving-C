
/*

    Input:
    (0,0)10      (0,1)20      (0,2)30
    (1,0)40      (1,1)50      (1,2)60
    (2,0)70      (2,1)80      (2,2)90

    Output:
    10 50 90


*/



#include <stdio.h>

main() {
    int x[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Please Enter a Numbers: ");
            scanf("%d", & x[i][j]);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(i == j){
                printf(" %d", x[i][j]);
            }
        }
    }
    return 0;
}

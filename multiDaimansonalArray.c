
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

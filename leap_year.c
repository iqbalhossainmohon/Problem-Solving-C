
#include <stdio.h>
    main(){
        int year;
        printf("please Enter a Year: ");
        scanf("%d", & year);

        if(year % 4 == 0){
            printf("%d is leap Year", year);
        }
        else{
            printf("%d is not leap year", year);
        }
    }

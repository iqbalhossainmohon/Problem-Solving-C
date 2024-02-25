

#include<stdio.h>
main(){
    char alphabet;
    printf("Alphabet from a to z: ");
    /* ASCII value of a=97
     ASCII value of z=122 */
    for(alphabet = 97; alphabet<= 122; alphabet ++){
        printf("%c ", alphabet);
    }
}


/* #include<stdio.h>
 main(){
    char alphabet;
  printf("Alphabet from A to Z: \n");
    for(alphabet = 'A'; alphabet<= 'Z'; alphabet ++){
        printf("%c ", alphabet);
    }
    printf("\n");
}
*/

#include <stdio.h>

int main() {
    //char str[] = "Hello, world!";
    //int length = 0;

    char str[100];
    gets(str);
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string \"%s\" is: %d\n", str, length);
    return 0;
}

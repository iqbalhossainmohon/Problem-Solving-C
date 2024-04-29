#include <stdio.h>

int main() {
    char str[] = "Hello, world!";
    int length = 0;

    // Iterate through the string until reaching the null terminator
    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string \"%s\" is: %d\n", str, length);
    return 0;
}

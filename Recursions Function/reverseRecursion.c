/*
/// C program to find reverse of a number using recursion.

#include <stdio.h>

int reverse(int num, int rev) {
    if (num == 0)
        return rev;
    else
        return reverse(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverse(num, 0);
    printf("Reverse of the number: %d\n", rev);
    return 0;
}

*/

/// C program to find reverse of a number using recursion.

#include <stdio.h>

int reverse(int num) {
  int reversed = 0;

  while (num != 0) {
    int last_digit = num % 10;
    reversed = reversed * 10 + last_digit;
    num = num/ 10;
  }

  return reversed;
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  int reversed_number = reverse(number);

  printf("Reversed number: %d\n", reversed_number);

  return 0;
}


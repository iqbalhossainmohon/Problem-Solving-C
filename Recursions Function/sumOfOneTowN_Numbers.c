/// C program to find sum of natural numbers from 1 to n using recursion

#include <stdio.h>

/**
    /// Function declaration
 * Recursively find the sum of natural number
 */
int sumOfNaturalNumbers(int start, int end){
    if(start == end)
        return start;
    else
        return start + sumOfNaturalNumbers(start + 1, end);
}

main()
{
    int start, end, sum;

    /* Input lower and upper limit from user */
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);

    sum = sumOfNaturalNumbers(start, end);

    printf("Sum of natural numbers from %d to %d = %d", start, end, sum);

    return 0;
}



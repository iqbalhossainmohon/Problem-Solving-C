#include <stdio.h>

int main() {
    int numbers[35], sum = 0;
    int average;
    int above_average_count = 0;
    int below_average_count = 0;
    int max_number;
    int min_number;

    //printf("Enter the numbers of students: ");

    for (int i = 0; i < 35; i++) {
        printf("Enter number for student %d: ", i+1 );
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    average = sum / 35;

    /// Counting the number of students above and below the mean marks
    for (int i = 0; i < 35; i++) {
        if (numbers[i] > average) {
            above_average_count++;
        } else if (numbers[i] < average) {
            below_average_count++;
        }
    }

    /// Finding the maximum and minimum numbers
    max_number = numbers[0];
    min_number = numbers[0];
    for (int i = 1; i < 35; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
        if (numbers[i] < min_number) {
            min_number = numbers[i];
        }
    }

    printf("Average number: %d\n", average);
    printf("Number of students above average: %d\n", above_average_count);
    printf("Number of students below average: %d\n", below_average_count);
    printf("Student with highest number: %d\n", max_number);
    printf("Student with lowest number: %d\n", min_number);

    return 0;
}

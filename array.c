#include <stdio.h>

int main() {

    int n;
       printf("Enter number of student: ");
       scanf("%d", & n);

    int numbers[n];
    int sum = 0, above_average_count = 0;
    int average, max_number, min_number;
    int below_average_count = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter the number for student ID = %d: ", i+1 );
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    average = sum / n;


    for (int i = 0; i < n; i++) {
        if (numbers[i] > average) {
            above_average_count++;
        } else if (numbers[i] < average) {
            below_average_count++;
        }
    }


    max_number = numbers[0];
    min_number = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
        if (numbers[i] < min_number) {
            min_number = numbers[i];
        }
    }

    printf("Average number: %d\n", average);
    printf("Number of students above average marks: %d\n", above_average_count);
    printf("Number of students below average marks: %d\n", below_average_count);
    printf("Student with highest number: %d\n", max_number);
    printf("Student with lowest number: %d\n", min_number);

    return 0;
}

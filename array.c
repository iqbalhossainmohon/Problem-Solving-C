#include <stdio.h>

int main() {
    // শিক্ষার্থীদের নাম্বার ইনপুট নেওয়া
    int numbers[3], sum = 0;
    int average;
    int above_average_count = 0;
    int below_average_count = 0;
    int max_number;
    int min_number;

    //printf("Enter the numbers of students: ");

    // নাম্বারগুলি ইনপুট নেওয়া
    for (int i = 0; i < 3; i++) {
        printf("Enter number for student %d: ", i+1 );
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // গড় নাম্বার ক্যালকুলেট করা
    average = sum / 3;

    // গড় নাম্বারের উপরে এবং নিচে কতজন শিক্ষার্থী আছে তা গণনা করা
    for (int i = 0; i < 3; i++) {
        if (numbers[i] > average) {
            above_average_count++;
        } else if (numbers[i] < average) {
            below_average_count++;
        }
    }

    // সর্বোচ্চ এবং সর্বনিম্ন নাম্বার খুঁজে বের করা
    max_number = numbers[0];
    min_number = numbers[0];
    for (int i = 1; i < 3; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
        if (numbers[i] < min_number) {
            min_number = numbers[i];
        }
    }

    // প্রদর্শন করা
    printf("Average number: %d\n", average);
    printf("Number of students above average: %d\n", above_average_count);
    printf("Number of students below average: %d\n", below_average_count);
    printf("Student with highest number: %d\n", max_number);
    printf("Student with lowest number: %d\n", min_number);

    return 0;
}

#include <stdio.h>

int main() {
    float marks[5], sum = 0, average;
    int i;

    printf("Enter marks for 5 subjects: \n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    average = sum / 5;

    printf("\nTotal Marks = %.2f\n", sum);
    printf("Average Marks = %.2f\n", average);

    if(average >= 90)
        printf("Grade: A+\n");
    else if(average >= 80)
        printf("Grade: A\n");
    else if(average >= 70)
        printf("Grade: B\n");
    else if(average >= 60)
        printf("Grade: C\n");
    else if(average >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F (Fail)\n");

    return 0;
}

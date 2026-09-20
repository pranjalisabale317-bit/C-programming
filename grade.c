#include <stdio.h>

int main() {
    float score;
    printf("\n Enter your score (0-100) :");
    scanf("\n%f",&score);
    if(score>=90)
    {
        printf("\n Grade:A");
    }
    else if(score>=75)
    {
    printf("\nGrade:B");
    }
    else if(score>=60)
    {
    printf("\n Grade:C");
    }
    else if(score<=45)
    {
        printf("\nGrade:D");
    }
    else
    {
        printf("\n Fail:(try again)");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int sub, marks;
    char sub_name[50];

    printf("Enter number of subjects: ");
    scanf("%d", &sub);

    for (int i = 1; i <= sub; i++) {
        printf("\nEnter name of subject %d: ", i);
        scanf("%s", sub_name);

        printf("Enter marks for %s: ", sub_name);
        scanf("%d", &marks);

        if (marks >= 28) {
            printf("Result = PASS\n");
        } else {
            printf("Result = FAIL (try again)\n");
        }
    }

    return 0;
}

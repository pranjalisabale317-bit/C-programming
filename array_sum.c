#include <stdio.h>

int main() {
    int a[5];
    int i, sum = 0;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nYou have entered:\n");
    for (i = 0; i < 5; i++) {
        sum = sum + a[i];
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\nSummation: %d\n", sum);

    return 0;
}

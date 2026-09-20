#include <stdio.h>

int main() {
    int a[5];
    int i, product;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nYou have entered:\n");
    for (i = 0; i < 5; i++) {
        product = product* a[i];
        printf("a[%d] = %d\n", i, a[i]);
    }

    printf("\nproduct: %d\n", product);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length, i;
    
    printf("Enter password length: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid length!\n");
        return 1;
    }

    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    int charsetSize = sizeof(charset) - 1;

    srand(time(0));
    
    printf("Generated Password: ");
    for (i = 0; i < length; i++) {
        int index = rand() % charsetSize;
        printf("%c", charset[index]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    float balence, amount;
    int choice;

    printf("Enter current balence: ");
    scanf("%f", &balence);

    printf("\nChoose action:\n");
    printf("1. Deposit (Credit amount)\n");
    printf("2. Withdraw (Debit amount)\n");
    printf("Choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter amount to deposit: ");
        scanf("%f", &amount);
        balence = balence + amount;
        printf("\nTotal amount after deposit: %.2f\n", balence);
    } 
    else if (choice == 2) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);

        if (amount <= balence) {
            balence = balence - amount;
            printf("\nTotal amount after withdrawal: %.2f\n", balence);
        } else {
            printf("\nError: Insufficient balence!\n");
        }
    } 
    else {
        printf("\nInvalid choice!\n");
    }

    return 0;
}

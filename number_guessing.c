#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed random number generator
    srand(time(0));
    secretNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You found the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}

/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/g/26438/25
Date:8/10/2025
Description: Program to implement a number guessing game.
*/

//Header files in use
//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Variable declatation
int main() {
    int secretNumber, guess, attempts = 0;

    srand(time(0));  // Seed random number generator
    secretNumber = rand() % 20 + 1;  // Random number between 1 and 20
//Introductory statements
    printf("Welcome to the Baraka Number Guessing Game!\n");
    printf("Today might be your lucky day!!.\n");
    
    //Prompting the user to enter their guess
    printf("Enter your guess: ");
    scanf("%d", &guess);
//While loop input
    while (guess != secretNumber) {
        attempts++;

        if (guess > secretNumber)
            printf("Too high!\n");
        else
            printf("Too low!\n");

        printf("Try again: ");
        scanf("%d", &guess);
    }

    attempts++; // Count the correct guess too
    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
    //Closing statement
    printf("Thank you for playing.");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int guess, secret_number; //guess -> user nput
    int guess_count = 0;
    const int GUESS_LIMIT = 10; // maximum number of guesses allowed.
    
    // generate random number
    srand(time(0)); // Use time as seed 
    // random number btwn 1 to 100 
    secret_number = rand() % 100 + 1;
  
    // create an infinite loop for the game until the user guesses right or runs out of moves
    while(guess != secret_number) {
        if (guess_count <= GUESS_LIMIT) {
            // get user input
            printf("Enter your guess: ");
            scanf("%d", &guess);

            if (guess > secret_number) {
                printf("Try a lower number. \n");
                guess_count++;
            } else if(guess < secret_number) {
                printf("Try a higher number.\n");
                guess_count++;
            } else {
                printf("You guessed right! in %d attempts!\n", guess_count);
                break;
            }
        } else {
            printf("Sorry, you are out of moves!\n");
            break;
        }
  
    }
    return 0;
}

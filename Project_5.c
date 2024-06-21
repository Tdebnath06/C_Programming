#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int guess;
    int attempts = 5;
    time_t t;
    srand((unsigned) time(&t));
    randomNumber = rand() % 21;
    printf("%d", randomNumber);
    printf("\n This is a guessing game, you have 5 guesses to guess a number 1 through 20");
    for(int maxGuess = 1; maxGuess <= 5; ++maxGuess)
    {
        printf("\nPlease enter your guess\n");
        scanf("%d", &guess); 
        attempts--;
        if(guess > 20)
        {
            printf("It seems that was an invalid guess. Please enter a number between 1 and 20\n");
            scanf("%d", &guess); //takes in input
        }

        else if(guess > randomNumber)
        {
            printf("Nope! your guess was too high and you have %d guesses left", attempts);
        }

        else if(guess < randomNumber)
        {
            printf("Nope! Your guess was too low and you have %d guesses left", attempts);
        }

        else
        {
            printf("Congrats! you guessed the number correctly, the number was: %d", randomNumber);
        }    
    }

    printf("\nThe number was %d", randomNumber);

    return 0;



}
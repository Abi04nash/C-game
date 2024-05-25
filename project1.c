#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number , guess , nguesses=0;
    srand(time(0));
    number = rand()%100 + 1; // Generates a random numbers between 1 and 100
    printf(" The number is %d" , number);
    // Keep running the loop until the number is guessed
    do
    {
        printf("\nGuess the number between 1 to 100\n");
        scanf("%d" , &guess);
        if (guess > number)
        {
            printf("Lower number plzzzzz\n");
        }
        else if(guess < number)
        {
            printf("Higher number plzzzzz\n");
        }
        else{
            printf("You guessed it in %d attempts\n" , nguesses);
        }
      nguesses++;  
    } while (guess!=number);
    
    
    return 0;
}
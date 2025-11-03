#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random seed using current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX
    int randomNumber = (rand() % 100) + 1;
    int no_of_guessed=0;   //no. of guesses by the user
    int guessed;

    do {
        printf("Enter the Number = ");
        scanf("%d",&guessed);

        if ( guessed > randomNumber ){
            printf("LESSER NUMBER PLEASE!\n");    
        }
        else if ( guessed < randomNumber ){
            printf("HIGHER NUMBER PLEASE!\n");
        }
        else {
            printf("CONGRATS !!! \n");
        }
        no_of_guessed++;   //counting the guesses

    }while (guessed != randomNumber);

    printf("YOU GUESSED THE RIGHT NUMBER IN %d GUESSES",no_of_guessed);

    return 0;
}

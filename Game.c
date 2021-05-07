#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("<<<<<<<<<<GUESS THE NUMBER CHALLENGE>>>>>>>>>>\n\n\n\n");
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%1000 +1;// Generates a random number between 1 and 100
     while(1){
        printf("      Guess the number between 1 to 1000\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("\n No!!!!Not this number.Kindly, try again with a lower number\n");
        }
        else if(guess<number){
            printf("\n Oh no!!! You did not guess the number. Please, enter a higher number\n");
        }
        else{
            printf("                   Congratulations!!!!! You guessed the number %d in %d attempts",number,nguesses);
        }
        nguesses++;
        if(nguesses==6){
            printf("\n\n           THE END\n");
            printf("\n\n\nSorry!!!After reviewing, we saw that you lost the game.So, no more chances. Better luck next time.");
            break;
        }
     }
    return 0;
}


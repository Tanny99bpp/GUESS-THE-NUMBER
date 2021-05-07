#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("<<<<<<<<<<GUESS THE NUMBER CHALLENGE>>>>>>>>>>\n\n\n\n");
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%1000 +1;// Generates a random number between 1 and 100
    //printf("The number is %d\n",number);
    //Keep running the loop until the number is guessed
     do{
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
     }while(guess != number);
    return 0;
}

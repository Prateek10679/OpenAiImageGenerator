#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int number ,guess,nguess;
        srand(time(0));
        number=rand()%100 +1;
            // printf("the number is guesssed by the computer is %d \n", number);
                do{
                    printf("guess the number BTW 1 to 100 %d \n", guess);
                    scanf("%d", &guess);

                    if(guess>number){
                    printf("loweer no please");
                    }
                    else if(guess<number){

                        printf("higher no please");
                    }
                    else
                    {
                        printf("you gueeses the right no in %d attempys \n", nguess);
                    }
                    nguess++;
                    }

                    while(guess!=number);
                    return 0;
                }



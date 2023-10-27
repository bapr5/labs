#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
int main(){
    int randNum,input;
    srand(time(NULL));
    randNum=rand()%100+1;
    printf("Got random number: %d\n",randNum);
    printf("Try to guess!\n");
    while (1) {
        scanf("%d",&input);
        if(input==randNum){
            printf("Correct! \n");
            break;
        }
        else{
            printf("Wrong! try again: \n");

        }
    }
}

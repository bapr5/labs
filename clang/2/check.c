#include <stdlib.h>
#include <time.h> 
#include <stdio.h>
int main(){
    int total,input;
    total=0;
    while (1) {
        scanf("%d",&input);
        if(input!=0){
            total+=input;
            printf("Total: %d\n", total);
        }
        else{
            printf("Now checking out!\n");
            scanf("%d",&input);
            printf("Total = %d",input-total);
            break;
        }
    }
}

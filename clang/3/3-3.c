#include <stdio.h>
int a =10;
int main(){
    if(a<5){
        a++;
        a=a*2;
    }
    a=a-1;
    printf("%d\n",a);
}
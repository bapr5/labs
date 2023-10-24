#include <stdio.h>
int main(){
    int d1,m1,y1,d2,m2,y2,t1,t2;
    printf("d1= m1= y1=");
    scanf("%d %d %d", &d1,&m1,&y1);
    printf("d2= m2= y2=");
    scanf("%d %d %d", &d2,&m2,&y2);
    if(y1>y2){
        printf("Второй старше");
    }
    else if (y1<y2) {
        printf("Первый старше");
    }
    else{
        if(m1>m2){
        printf("Второй старше");
        }
        else if (m1<m2) {
        printf("Первый старше");
        }
        else{
            if(d1>d2){
            printf("Второй старше");
            }
            else if (d1<d2) {
            printf("Первый старше");
            }
            else{
                printf("Они одного возраста");
            }
        }
    }
}
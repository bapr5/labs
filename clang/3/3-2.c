#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a) {
        case 1: printf("январь");return 0;
        case 2: printf("февраль");return 0;
        case 3: printf("март");return 0;
        case 4: printf("апрель");return 0;
        case 5: printf("май");return 0;
        case 6: printf("июнь");return 0;
        case 7: printf("июль");return 0;
        case 8: printf("август");return 0;
        case 9: printf("сентябрь");return 0;
        case 10: printf("октябрь");return 0;
        case 11: printf("ноябрь");return 0;
        case 12: printf("декабрь");return 0;
        default: printf("ошибка");return 1;
    }
}
#include <stdio.h>
int main(){
    int a=466;
    char symbol1='!';
    double mu =1.25e-6;
    printf("Так работает вывод текста\n");
    printf("Вывод нескольких чисел:%8d %8d %8d\n", -145,0xFFF,016);
    printf("\tВывод переменной в десятeричной системе:%d\n", a);
    printf("\tВывод переменной в восьмеричной системе:%o\n", a);
    printf("\tВывод переменной в шестнадцатеричной системе:%X\n", a);
    printf("\tВывод символа %c и его кода %d\n", symbol1,symbol1);
    printf("\tВывод вещественного числа %10.8f\n", mu);
    printf("\tВывод вещественного числа в экспонен.форме %5.2e\n", mu);
}
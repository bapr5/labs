#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    float x;
    scanf("%f",&x);
    float s;
    s=(sqrt(fabs(pow(log(tan(x)),2)-123)))/(pow(exp(1),-3*x)+atan(x));
    printf("%f",s);
}
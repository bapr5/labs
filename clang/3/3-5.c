#include <math.h>
#include <stdio.h>
float f(float m, float n){
    float res;
    res=(m>0&&0>n)?m+powf(n,2):m+1;
    res=(m<=0&&0>n)?m+2*n:m+1;
    return res;
}
int main(){
    float m,n,res;
    printf("m=");
    scanf("%f", &m);
    printf("n=");
    scanf("%f", &n);
    res=f(m,n);
    printf("%f",res);
}

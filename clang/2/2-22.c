#include <math.h>
#include <stdio.h>
int main()
{
    int c=5,d;
    float a=5,b;
    
    printf("d=");
    scanf("%d", &d);
    printf("d=");
    scanf("%f", &b);
    a=a+b-2;d=c-a+d;
    a=a*c;c=c+1;
    a=a/10;c=c/2;b=b-1;d=d*(c+b+a);
    printf("a=%f,b=%f,\nc=%d,d=%d\n",a,b,c,d);
    
}

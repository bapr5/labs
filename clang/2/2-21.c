#include <stdio.h>
int main(void)
{
int c=5, d;
float a=5, b;
printf("b=");
scanf("%f", &b);
a+=b-2;
printf("a=a+b-2, a=%f, b=%f\n", a, b);
printf("d=");
scanf("%d", &d);
d+=(c=c+1)-a;
printf("d=(c=c+1)-a+d, a=%f, c=%d, d=%d\n", a, c, d);
a*=(c-1);
printf("a=a*(c-1), a=%f, c=%d\n", a, c);
d*=((c=c/2)+(b-1)+(a/10));
printf("d=d*(c/2+b-1+a/10), a=%f, b=%f, c=%d, d=%d\n ", a, b, c, d);
return 0;
}
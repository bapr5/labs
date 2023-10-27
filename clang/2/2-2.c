#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int a, b = 5, c;
    float x, y = -.5, z;
    printf("a=");
    scanf("%d", &a);
    x = c= a;
    printf("x=c=a : a=%d, c=%d, x=%f\n",a,c,x);
    a = a+b;
    printf("a=a+b : a=%d\n", a);
    x = x+ b+a;
    printf("x = x+ b+a : x=%lf\n", x);
    b = b+ a--;
    printf("b = b+ a-1 : a=%d b=%d\n",a, b);
    x = x-++c;
    printf("x=x-(c+1) : c=%d x=%f \n",c,x);
    c = a/b;
    printf("c = a/b : c=%4d\n",c);
    c = a%b;
    printf("c = a%b : c=%d\n",c);
    x = 5.3;
    y += ((--x-1)/x++);
    printf("x = %f\t y = %.2f\n\nx = %.0f\ty = %.0f\n", x - 1, y, x, y - 1);
    z = a/2;
    printf("z = a/2: z =%f\n", z);
    z = (float) a/2;
    printf("z=a/2 : z = %f\n", z);
    y = x/2;
    printf("y = x/2 : y = %f\n", y);
    y = (int)x/2;
    printf("y=x/2: y = %f\n", y);
    z = a%2 - (x+b)/c + (x-y)/(a-1) + 1/4*a - y++ + ++b/3.;
    printf("a = %d b = %d c = %d x = %f y = %f z = %f\n", a, b, c, x, y, z);
    return 0;
}
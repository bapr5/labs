#include <math.h>
#include <stdio.h>
int main()
{
    int a=3,b=4;
    float x;
    x=3/4;
    x=3./4;
    x=3/4.;
    x=a/4;
    x=a/4.;
    x=a/b;
    x=(float)a/4;
    x=a/(float)b;
    printf("%f",x);
}

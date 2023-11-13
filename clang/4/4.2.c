#include<stdio.h>
int main()
{
    int min, max, imin = 0, imax = 0, a[18], k;
    for (int i = 0; i < 18; i++)
    {
        scanf("%d ", &a[i]);
    }
    min = max = a[0];
    for (int i = 1; i <= 18; i++)
    {
        if (a[i] > 0) { max = a[i]; imax = i; break; }
    }
    for (int i = 1; i <= 18; i++)
    {
        if (a[i] > min && a[i] < 0) { min = a[i]; imin = i; }
    }
    k = a[imin];
    a[imin] = a[imax];
    a[imax] = k;
    printf("\n");
    for (int i = 0; i < 18; i++)
        printf("%d ", a[i]);
    return 0;
}
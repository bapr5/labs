#include <stdio.h>
int main()
{
    int k = 0, a[21], n = 0;
    for (int i = 10; i < 100; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                k++;
        }
        if (k == 1)
        {
            a[n] = i;
            n++;
        }
        k = 0;
    }
    for (n = 0; n < 21; n++)
        printf("%d ", a[n]);
    scanf("%d", &a[n]);
    return 0;
}
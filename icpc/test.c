#include <stdio.h>

int eucld(int a, int b) {
    while (b != 0) {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

void delfinder(int l, int r, int* maxpair) {
    int maxdel = 0;
    for (int x = l; x < r; x++) {
        for (int y = x + 1; y <= r; y++) {
            int gcd = eucld(x, y);
            if (gcd > maxdel) {
                maxdel = gcd;
                maxpair[0] = x;
                maxpair[1] = y;
            }
        }
    }
}

int main() {
    int l, r;
    scanf("%d %d", &l, &r);
    int maxpair[2] = {0, 0};
    delfinder(l, r, maxpair);
    printf("%d %d\n", maxpair[0], maxpair[1]);
    return 0;
}

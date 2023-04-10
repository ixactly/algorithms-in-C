#include <stdio.h>

int gcd(int u, int v) {
    while(v > 0) {
        if(v > u) {
            int t = u;
            u     = v;
            v     = t;
        }
        int mod = u % v;
        u       = v;
        v       = mod;
    }
    return u;
}

int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF) {
        printf("%d, %d, %d\n", x, y, gcd(x, y));
    }
}
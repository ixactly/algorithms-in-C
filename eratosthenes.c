#include <stdio.h>

#define N 1000
int main() {
    int prime[N + 1];
    for(int i = 0; i < N + 1; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;

    for(int i = 2; i < N + 1; i++) {
        if(!prime[i])
            continue;
        for(int j = 2 * i; j < N + 1; j += i) {
            prime[j] = 0;
        }
    }

    for(int i = 0; i < N + 1; i++) {
        if(prime[i])
            printf("%d, ", i);
    }
}
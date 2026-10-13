/*
Day 28 - Q55
Primes 1 to N
*/

#include <stdio.h>

int main() {
    int n, i, j, p;
    scanf("%d", &n);
    for(i=2;i<=n;i++) {
        p=1;
        for(j=2;j*j<=i;j++)
            if(i%j==0) {
            p=0;
            break;
        }
        if(p)
            printf("%d ", i);
    }
    return 0;
}

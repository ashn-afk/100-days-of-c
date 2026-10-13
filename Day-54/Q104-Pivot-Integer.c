/*
Day 54 - Q104
Pivot Integer
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long n, total, x;
    scanf("%lld", &n);
    total=n*(n+1)/2;
    x=(long long)sqrt((double)total);
    printf(x*x==total?"%lld":"-1", x);
    return 0;
}

/*
Day 18 - Q36
HCF GCD
*/

#include <stdio.h>

int main() {
    int a, b, r;
    scanf("%d%d", &a, &b);
    while(b) {
        r=a%b;
        a=b;
        b=r;
    }
    if(a<0)
        a=-a;
    printf("%d", a);
    return 0;
}

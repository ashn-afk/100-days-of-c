/*
Day 21 - Q41
Swap First and Last Digit
*/

#include <stdio.h>

int main() {
    int n, t, first, last, p=1;
    scanf("%d", &n);
    if(n<10&&n>-10) {
        printf("%d", n);
        return 0;
    }
    t=n;
    if(t<0)
        t=-t;
    last=t%10;
    while(t>=10) {
        t/=10;
        p*=10;
    }
    first=t;
    t=(n<0?-n:n);
    t=t-first*p-last+last*p+first;
    printf("%d", n<0?-t:t);
    return 0;
}

/*
Day 22 - Q43
Strong Number
*/

#include <stdio.h>

int main() {
    int n, t, d, i, f, sum=0;
    scanf("%d", &n);
    t=n;
    do {
        d=t%10;
        f=1;
        for(i=1;i<=d;i++)
            f*=i;
        sum+=f;
        t/=10;
    }
    while(t)
        ;
    printf(sum==n?"Strong Number":"Not Strong Number");
    return 0;
}

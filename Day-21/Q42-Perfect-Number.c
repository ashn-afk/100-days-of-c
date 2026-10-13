/*
Day 21 - Q42
Perfect Number
*/

#include <stdio.h>

int main() {
    int n, i, sum=0;
    scanf("%d", &n);
    for(i=1;i<=n/2;i++)
        if(n%i==0)
            sum+=i;
    printf(sum==n&&n>0?"Perfect Number":"Not Perfect Number");
    return 0;
}

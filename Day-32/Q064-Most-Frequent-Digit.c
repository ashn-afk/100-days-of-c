/*
Day 32 - Q64
Most Frequent Digit
*/

#include <stdio.h>

int main() {
    long long n;
    int cnt[10]= {
        0
    }
    , d, i, mx=0, ans=0;
    scanf("%lld", &n);
    if(n<0)
        n=-n;
    if(n==0)
        cnt[0]=1;
    while(n) {
        cnt[n%10]++;
        n/=10;
    }
    for(i=0;i<10;i++)
        if(cnt[i]>mx) {
        mx=cnt[i];
        ans=i;
    }
    printf("%d", ans);
    return 0;
}

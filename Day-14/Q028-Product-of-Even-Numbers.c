/*
Day 14 - Q28
Product of Even Numbers
*/

#include <stdio.h>

int main() {
    int n,i; long long p=1; scanf("%d",&n); for(i=2;i<=n;i+=2) p*=i; printf("%lld",p); return 0;
}

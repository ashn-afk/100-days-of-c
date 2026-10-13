/*
Day 15 - Q29
Factorial
*/

#include <stdio.h>

int main() {
    int n,i; long long f=1; scanf("%d",&n); if(n<0){printf("Invalid");return 0;} for(i=1;i<=n;i++)f*=i; printf("%lld",f); return 0;
}

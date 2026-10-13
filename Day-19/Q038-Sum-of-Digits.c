/*
Day 19 - Q38
Sum of Digits
*/

#include <stdio.h>

int main() {
    int n,sum=0; scanf("%d",&n); if(n<0)n=-n; while(n){sum+=n%10;n/=10;}printf("%d",sum);return 0;
}

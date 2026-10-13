/*
Day 20 - Q39
Product of Odd Digits
*/

#include <stdio.h>

int main() {
    int n,d,p=1,found=0;scanf("%d",&n);if(n<0)n=-n;while(n){d=n%10;if(d%2){p*=d;found=1;}n/=10;}if(found)printf("%d",p);else printf("0");return 0;
}

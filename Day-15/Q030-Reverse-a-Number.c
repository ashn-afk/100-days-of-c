/*
Day 15 - Q30
Reverse a Number
*/

#include <stdio.h>

int main() {
    int n,rev=0; scanf("%d",&n); while(n){rev=rev*10+n%10;n/=10;} printf("%d",rev); return 0;
}

/*
Day 16 - Q31
Decimal to Binary
*/

#include <stdio.h>

int main() {
    unsigned int n; int b[32],i=0,j; scanf("%u",&n); if(n==0){printf("0");return 0;} while(n){b[i++]=n%2;n/=2;} for(j=i-1;j>=0;j--)printf("%d",b[j]); return 0;
}

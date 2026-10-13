/*
Day 17 - Q33
Armstrong Number
*/

#include <stdio.h>

int main() {
    int n,t,d=0,sum=0,x,r,i,p; scanf("%d",&n); if(n<0){printf("Not Armstrong Number");return 0;} t=n; do{d++;t/=10;}while(t); t=n; do{r=t%10;p=1;for(i=0;i<d;i++)p*=r;sum+=p;t/=10;}while(t); printf(sum==n?"Armstrong Number":"Not Armstrong Number"); return 0;
}

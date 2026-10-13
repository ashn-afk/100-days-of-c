/*
Day 55 - Q105
Majority Element
*/

#include <stdio.h>

int main() {
    int a[100],n,i,cand=0,count=0,f=0;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++){if(count==0)cand=a[i];count+=(a[i]==cand)?1:-1;}for(i=0;i<n;i++)if(a[i]==cand)f++;if(f>n/2)printf("%d",cand);else printf("-1");return 0;
}

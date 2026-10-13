/*
Day 51 - Q101
First and Last Occurrence
*/

#include <stdio.h>

int main() {
    int a[100],n,x,i,l,r,m,first=-1,last=-1;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);l=0;r=n-1;while(l<=r){m=(l+r)/2;if(a[m]==x){first=m;r=m-1;}else if(a[m]<x)l=m+1;else r=m-1;}l=0;r=n-1;while(l<=r){m=(l+r)/2;if(a[m]==x){last=m;l=m+1;}else if(a[m]<x)l=m+1;else r=m-1;}printf("%d %d",first,last);return 0;
}

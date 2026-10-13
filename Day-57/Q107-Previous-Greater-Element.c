/*
Day 57 - Q107
Previous Greater Element
*/

#include <stdio.h>

int main() {
    int a[100],n,i,j,x;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++){x=-1;for(j=i-1;j>=0;j--)if(a[j]>a[i]){x=a[j];break;}printf("%d%s",x,i<n-1?",":"");}return 0;
}

/*
Day 60 - Q110
Maximum in Each Window
*/

#include <stdio.h>

int main() {
    int a[100],n,k,i,j,mx;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);if(k<=0||k>n){printf("Invalid k");return 0;}for(i=0;i<=n-k;i++){mx=a[i];for(j=i+1;j<i+k;j++)if(a[j]>mx)mx=a[j];printf("%d ",mx);}return 0;
}

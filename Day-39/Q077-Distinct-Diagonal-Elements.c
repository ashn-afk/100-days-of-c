/*
Day 39 - Q77
Distinct Diagonal Elements
*/

#include <stdio.h>

int main() {
    int a[10][10],n,i,j,d=1;scanf("%d",&n);for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);for(i=0;i<n;i++)for(j=i+1;j<n;j++)if(a[i][i]==a[j][j])d=0;printf(d?"Diagonal elements are distinct":"Diagonal elements are not distinct");return 0;
}

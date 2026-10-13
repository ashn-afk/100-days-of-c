/*
Day 38 - Q76
Symmetric Matrix
*/

#include <stdio.h>

int main() {
    int a[10][10], n, i, j, s=1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(a[i][j]!=a[j][i])
                s=0;
    printf(s?"Symmetric":"Not Symmetric");
    return 0;
}

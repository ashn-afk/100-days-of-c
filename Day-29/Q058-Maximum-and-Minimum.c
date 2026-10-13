/*
Day 29 - Q58
Maximum and Minimum
*/

#include <stdio.h>

int main() {
    int a[100], n, i, mn, mx;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    mn=mx=a[0];
    for(i=1;i<n;i++) {
        if(a[i]<mn)
            mn=a[i];
        if(a[i]>mx)
            mx=a[i];
    }
    printf("Maximum = %d\nMinimum = %d", mx, mn);
    return 0;
}

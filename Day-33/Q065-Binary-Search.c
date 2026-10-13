/*
Day 33 - Q65
Binary Search
*/

#include <stdio.h>

int main() {
    int a[100], n, x, i, l=0, r, m, pos=-1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    r=n-1;
    while(l<=r) {
        m=(l+r)/2;
        if(a[m]==x) {
            pos=m;
            break;
        }
        if(a[m]<x)
            l=m+1;
        else
            r=m-1;
    }
    printf("%d", pos);
    return 0;
}

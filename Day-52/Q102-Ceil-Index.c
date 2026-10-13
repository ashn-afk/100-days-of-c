/*
Day 52 - Q102
Ceil Index
*/

#include <stdio.h>

int main() {
    int a[100], n, x, i, l=0, r, m, ans=-1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    r=n-1;
    while(l<=r) {
        m=(l+r)/2;
        if(a[m]>=x) {
            ans=m;
            r=m-1;
        } else l=m+1;
    }
    printf("%d", ans);
    return 0;
}

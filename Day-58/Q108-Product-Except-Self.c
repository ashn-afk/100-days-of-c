/*
Day 58 - Q108
Product Except Self
*/

#include <stdio.h>

int main() {
    int a[100], ans[100], n, i, p=1, s=1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    for(i=0;i<n;i++) {
        ans[i]=p;
        p*=a[i];
    }
    for(i=n-1;i>=0;i--) {
        ans[i]*=s;
        s*=a[i];
    }
    for(i=0;i<n;i++)
        printf("%d ", ans[i]);
    return 0;
}

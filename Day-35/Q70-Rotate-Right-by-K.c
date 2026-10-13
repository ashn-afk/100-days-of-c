/*
Day 35 - Q70
Rotate Right by K
*/

#include <stdio.h>

int main() {
    int a[100], n, k, i, j, t;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if(n<=0)
        return 0;
    k%=n;
    for(i=0;i<k;i++) {
        t=a[n-1];
        for(j=n-1;j>0;j--)
            a[j]=a[j-1];
        a[0]=t;
    }
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    return 0;
}

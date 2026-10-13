/*
Day 34 - Q68
Delete Element
*/

#include <stdio.h>

int main() {
    int a[100], n, x, i, pos=-1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i=0;i<n;i++)
        if(a[i]==x) {
        pos=i;
        break;
    }
    if(pos<0) {
        printf("Element not found");
        return 0;
    }
    for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
    return 0;
}

/*
Day 31 - Q61
Linear Search
*/

#include <stdio.h>

int main() {
    int a[100], n, i, x, pos=-1;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i=0;i<n;i++)
        if(a[i]==x) {
        pos=i;
        break;
    }
    printf("%d", pos);
    return 0;
}

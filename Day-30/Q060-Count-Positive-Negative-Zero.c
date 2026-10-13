/*
Day 30 - Q60
Count Positive Negative Zero
*/

#include <stdio.h>

int main() {
    int a[100], n, i, p=0, ng=0, z=0;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        if(a[i]>0)
            p++;
        else
            if(a[i]<0)
                ng++;
        else
            z++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", p, ng, z);
    return 0;
}

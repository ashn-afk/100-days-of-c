/*
Day 59 - Q109
Maximum Subarray Sum K
*/

#include <stdio.h>

int main() {
    int a[100], n, k, i, sum=0, mx;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    if(k<=0||k>n) {
        printf("Invalid k");
        return 0;
    }
    for(i=0;i<k;i++)
        sum+=a[i];
    mx=sum;
    for(i=k;i<n;i++) {
        sum+=a[i]-a[i-k];
        if(sum>mx)
            mx=sum;
    }
    printf("%d", mx);
    return 0;
}

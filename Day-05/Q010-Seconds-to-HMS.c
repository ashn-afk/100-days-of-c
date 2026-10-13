/*
Day 5 - Q10
Seconds to HMS
*/

#include <stdio.h>

int main() {
    int s,h,m; scanf("%d",&s); h=s/3600; s%=3600; m=s/60; s%=60; printf("%02d:%02d:%02d",h,m,s); return 0;
}

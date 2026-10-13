/*
Day 19 - Q37
LCM
*/

#include <stdio.h>

int main() {
    int a,b,x,y,r,g; scanf("%d%d",&a,&b); if(a==0||b==0){printf("0");return 0;} x=a;y=b;while(y){r=x%y;x=y;y=r;}g=x;if(g<0)g=-g;printf("%d",(a/g)*b<0?-(a/g)*b:(a/g)*b);return 0;
}

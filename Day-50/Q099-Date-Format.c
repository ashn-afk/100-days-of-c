/*
Day 50 - Q99
Date Format
*/

#include <stdio.h>

int main() {
    int d,m,y;const char *mon[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};scanf("%d/%d/%d",&d,&m,&y);if(m>=1&&m<=12)printf("%02d-%s-%04d",d,mon[m],y);else printf("Invalid month");return 0;
}

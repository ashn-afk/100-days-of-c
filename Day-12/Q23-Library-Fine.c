/*
Day 12 - Q23
Library Fine
*/

#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);
    if(d<=0)
        printf("No Fine");
    else
        if(d<=5)
            printf("Fine = %d", d*2);
    else
        if(d<=10)
            printf("Fine = %d", 10+(d-5)*4);
    else
        if(d<=30)
            printf("Fine = %d", 30+(d-10)*6);
    else
        printf("Membership Cancelled");
    return 0;
}

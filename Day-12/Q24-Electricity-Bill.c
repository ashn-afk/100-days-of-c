/*
Day 12 - Q24
Electricity Bill
*/

#include <stdio.h>

int main() {
    int u;
    double bill;
    scanf("%d", &u);
    if(u<0) {
        printf("Invalid");
        return 0;
    }
    if(u<=100)
        bill=u*5;
    else
        if(u<=200)
            bill=500+(u-100)*7;
    else
        if(u<=300)
            bill=1200+(u-200)*10;
    else
        bill=2200+(u-300)*12;
    printf("%.2f", bill);
    return 0;
}

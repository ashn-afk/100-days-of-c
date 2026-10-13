/*
Day 7 - Q13
Leap Year
*/

#include <stdio.h>

int main() {
    int y; scanf("%d",&y); printf((y%400==0||(y%4==0&&y%100!=0))?"Leap Year":"Not a Leap Year"); return 0;
}

/*
Day 10 - Q19
Triangle Classification
*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a+b<=c||a+c<=b||b+c<=a)
        printf("Invalid Triangle");
    else
        if(a==b&&b==c)
            printf("Equilateral");
    else
        if(a==b||b==c||a==c)
            printf("Isosceles");
    else
        printf("Scalene");
    return 0;
}

/*
Day 2 - Q3
Rectangle Area and Perimeter
*/

#include <stdio.h>

int main() {
    float l, b;
    scanf("%f%f", &l, &b);
    printf("Area = %.2f\nPerimeter = %.2f", l*b, 2*(l+b));
    return 0;
}

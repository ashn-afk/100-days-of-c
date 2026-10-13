/*
Day 9 - Q17
Quadratic Roots
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a==0) {
        printf("Not quadratic");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>0)
        printf("Real and distinct: %.2f %.2f", (-b+sqrt(d))/(2*a), (-b-sqrt(d))/(2*a));
    else
        if(d==0)
            printf("Real and equal: %.2f", -b/(2*a));
    else
        printf("Complex roots");
    return 0;
}

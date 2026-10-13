/*
Day 5 - Q9
Simple and Compound Interest
*/

#include <stdio.h>
#include <math.h>

int main() {
    double p,r,t,si,ci; scanf("%lf%lf%lf",&p,&r,&t); si=p*r*t/100; ci=p*pow(1+r/100,t)-p; printf("Simple Interest = %.2f\nCompound Interest = %.2f",si,ci); return 0;
}

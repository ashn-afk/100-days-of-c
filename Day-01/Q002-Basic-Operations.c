/*
Day 1 - Q2
Basic Operations
*/

#include <stdio.h>

int main() {
    float a,b; scanf("%f%f",&a,&b); printf("Sum = %.2f\nDifference = %.2f\nProduct = %.2f\n",a+b,a-b,a*b); if(b!=0) printf("Quotient = %.2f",a/b); else printf("Division by zero is not possible"); return 0;
}

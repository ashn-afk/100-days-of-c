/*
Day 13 - Q25
Switch Calculator
*/

#include <stdio.h>

int main() {
    int a, b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+':printf("%d", a+b);
        break;
        case '-':printf("%d", a-b);
        break;
        case '*':printf("%d", a*b);
        break;
        case '/':if(b)printf("%.2f", (float)a/b);
        else
            printf("Division by zero");
        break;
        case '%':if(b)printf("%d", a%b);
        else
            printf("Division by zero");
        break;
        default:printf("Invalid operator");
    }
    return 0;
}

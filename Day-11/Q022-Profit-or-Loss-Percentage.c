/*
Day 11 - Q22
Profit or Loss Percentage
*/

#include <stdio.h>

int main() {
    float cp,sp; scanf("%f%f",&cp,&sp); if(cp<=0){printf("Invalid");return 0;} if(sp>cp) printf("Profit = %.2f%%",(sp-cp)*100/cp); else if(sp<cp) printf("Loss = %.2f%%",(cp-sp)*100/cp); else printf("No Profit No Loss"); return 0;
}

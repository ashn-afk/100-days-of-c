/*
Day 9 - Q18
Grade from Percentage
*/

#include <stdio.h>

int main() {
    float p; scanf("%f",&p); if(p<0||p>100) printf("Invalid"); else if(p>=90) printf("Grade A"); else if(p>=80) printf("Grade B"); else if(p>=70) printf("Grade C"); else if(p>=60) printf("Grade D"); else printf("Grade F"); return 0;
}

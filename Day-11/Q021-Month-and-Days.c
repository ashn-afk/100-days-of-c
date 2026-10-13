/*
Day 11 - Q21
Month and Days
*/

#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    const char *names[]= {
        "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
    }
    ;
    int days[]= {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    }
    ;
    if(m>=1&&m<=12)
        printf("%s - %d days", names[m], days[m]);
    else
        printf("Invalid");
    return 0;
}

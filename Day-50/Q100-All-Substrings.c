/*
Day 50 - Q100
All Substrings
*/

#include <stdio.h>

int main() {
    char s[100];
    int i, j, k, n=0;
    scanf("%99s", s);
    while(s[n])
        n++;
    for(i=0;i<n;i++)
        for(j=i;j<n;j++) {
        for(k=i;k<=j;k++)
            putchar(s[k]);
        putchar('\n');
    }
    return 0;
}

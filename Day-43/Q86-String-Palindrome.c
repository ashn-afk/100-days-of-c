/*
Day 43 - Q86
String Palindrome
*/

#include <stdio.h>

int main() {
    char s[200];
    int i, n=0, p=1;
    scanf("%199s", s);
    while(s[n])
        n++;
    for(i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i]) {
        p=0;
        break;
    }
    printf(p?"Palindrome":"Not Palindrome");
    return 0;
}

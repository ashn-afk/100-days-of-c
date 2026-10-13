/*
Day 45 - Q89
Character Frequency
*/

#include <stdio.h>

int main() {
    char s[200], ch;
    int i, c=0;
    fgets(s, sizeof(s), stdin);
    scanf(" %c", &ch);
    for(i=0;s[i];i++)
        if(s[i]==ch)
            c++;
    printf("%d", c);
    return 0;
}

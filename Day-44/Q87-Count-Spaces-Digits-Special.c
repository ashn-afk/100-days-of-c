/*
Day 44 - Q87
Count Spaces Digits Special
*/

#include <stdio.h>

int main() {
    char s[200], ch;
    int i, sp=0, d=0, x=0;
    fgets(s, sizeof(s), stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) {
        ch=s[i];
        if(ch==' ')
            sp++;
        else
            if(ch>='0'&&ch<='9')
                d++;
        else
            if(!((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')))
                x++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial = %d", sp, d, x);
    return 0;
}

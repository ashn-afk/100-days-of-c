/*
Day 20 - Q40
Ones Complement
*/

#include <stdio.h>

int main() {
    char s[100];
    int i;
    scanf("%99s", s);
    for(i=0;s[i];i++) {
        if(s[i]=='0')
            s[i]='1';
        else
            if(s[i]=='1')
                s[i]='0';
        else
            {
            printf("Invalid binary number");
            return 0;
        }
    }
    printf("%s", s);
    return 0;
}

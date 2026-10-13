/*
Day 48 - Q96
Reverse Each Word
*/

#include <stdio.h>

int main() {
    char s[200], t;
    int i, start=0, end;
    fgets(s, sizeof(s), stdin);
    for(i=0;;i++) {
        if(s[i]==' '||s[i]=='\n'||s[i]=='\0') {
            end=i-1;
            while(start<end) {
                t=s[start];
                s[start]=s[end];
                s[end]=t;
                start++;
                end--;
            }
            start=i+1;
        }
        if(s[i]=='\n') {
            s[i]=0;
            break;
        }
        if(s[i]=='\0')
            break;
    }
    printf("%s", s);
    return 0;
}

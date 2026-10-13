/*
Day 47 - Q94
Longest Word
*/

#include <stdio.h>

int main() {
    char s[200], word[200], best[200]="";
    int i=0, j=0, k, bn=0;
    fgets(s, sizeof(s), stdin);
    while(1) {
        if(s[i]!=' '&&s[i]!='\n'&&s[i]!='\0')
            word[j++]=s[i];
        else
            {
            if(j>bn) {
                bn=j;
                for(k=0;k<j;k++)
                    best[k]=word[k];
                best[j]=0;
            }
            j=0;
            if(s[i]=='\n'||s[i]=='\0')
                break;
        }
        i++;
    }
    printf("%s", best);
    return 0;
}

/*
Day 46 - Q92
First Repeating Lowercase
*/

#include <stdio.h>

int main() {
    char s[200];
    int cnt[26]= {
        0
    }
    , i;
    fgets(s, sizeof(s), stdin);
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z')
            cnt[s[i]-'a']++;
    for(i=0;s[i];i++)
        if(s[i]>='a'&&s[i]<='z'&&cnt[s[i]-'a']>1) {
        putchar(s[i]);
        return 0;
    }
    printf("-1");
    return 0;
}

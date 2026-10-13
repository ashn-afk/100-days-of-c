/*
Day 47 - Q93
Anagrams
*/

#include <stdio.h>

int main() {
    char a[200], b[200];
    int cnt[256]= {
        0
    }
    , i;
    scanf("%199s%199s", a, b);
    for(i=0;a[i];i++)
        cnt[(unsigned char)a[i]]++;
    for(i=0;b[i];i++)
        cnt[(unsigned char)b[i]]--;
    for(i=0;i<256;i++)
        if(cnt[i]) {
        printf("Not Anagrams");
        return 0;
    }
    printf("Anagrams");
    return 0;
}

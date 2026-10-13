/*
Day 42 - Q83
Count Vowels and Consonants
*/

#include <stdio.h>

int main() {
    char s[200], ch;
    int i, v=0, c=0;
    fgets(s, sizeof(s), stdin);
    for(i=0;s[i];i++) {
        ch=s[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')) {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}

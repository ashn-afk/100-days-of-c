/*
Day 46 - Q91
Remove Vowels
*/

#include <stdio.h>

int main() {
    char s[200],ch;int i;fgets(s,sizeof(s),stdin);for(i=0;s[i];i++){ch=s[i];if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))putchar(ch);}return 0;
}

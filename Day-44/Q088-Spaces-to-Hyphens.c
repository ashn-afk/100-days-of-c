/*
Day 44 - Q88
Spaces to Hyphens
*/

#include <stdio.h>

int main() {
    char s[200];int i;fgets(s,sizeof(s),stdin);for(i=0;s[i];i++)if(s[i]==' ')s[i]='-';printf("%s",s);return 0;
}

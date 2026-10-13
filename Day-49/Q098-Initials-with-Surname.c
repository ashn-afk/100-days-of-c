/*
Day 49 - Q98
Initials with Surname
*/

#include <stdio.h>

int main() {
    char s[200];int i,last=0;fgets(s,sizeof(s),stdin);for(i=0;s[i];i++){if(s[i]=='\n')s[i]=0;else if(s[i]==' ')last=i+1;}if(last==0){printf("%s",s);return 0;}printf("%c ",s[0]);for(i=1;i<last;i++)if(s[i-1]==' '&&i!=last)printf("%c ",s[i]);printf("%s",&s[last]);return 0;
}

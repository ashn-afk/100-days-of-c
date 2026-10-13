/*
Day 48 - Q95
String Rotation
*/

#include <stdio.h>

int main() {
    char a[100],b[100],t[200];int i,n=0,m=0;scanf("%99s%99s",a,b);while(a[n])n++;while(b[m])m++;if(n!=m){printf("Not Rotation");return 0;}for(i=0;i<n;i++){t[i]=a[i];t[n+i]=a[i];}t[2*n]=0;for(i=0;i<n;i++){int j=0;while(b[j]&&t[i+j]==b[j])j++;if(j==n){printf("Rotation");return 0;}}printf("Not Rotation");return 0;
}

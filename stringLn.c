#include<stdio.h>
#include<string.h>
int main(){
    char t[20]="ABCDEFGHIJK";
    int s= strlen(t);
    t[3]='\0';
    int j=strlen(t);
    printf("%d, %d\n", s, j);
    return 0;
}
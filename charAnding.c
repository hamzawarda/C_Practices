#include<stdio.h>

int main(){
    char a='A', b='B';
    printf("%d, %d, %d\n",a, b, a&b);
    printf("%x, %x, %x\n",a, b, a&b);
    return 0;
}
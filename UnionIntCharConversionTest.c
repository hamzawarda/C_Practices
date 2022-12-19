#include<stdio.h>

int main(void){
    union a{
        int i;
        char ch[2];
    };
    union a u;
    u.i=0;
    u.ch[0]=3;
    u.ch[1]=2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    return 0;
}
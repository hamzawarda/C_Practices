#include<stdio.h>

int main(){
    register int R=20;
    int *p= &R; //register did not have an address.
    printf("%d\n", *p);
}

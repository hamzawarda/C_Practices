#include<stdio.h>

static int vStatic ;

void function1 (void){
    vStatic +=10;
}

int main (void){
    printf("Hello World, %d\n", vStatic);
    function1();
    printf("%d\n", vStatic);
    return 0;
}
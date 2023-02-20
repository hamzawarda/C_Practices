#include <stdio.h>

int (*(x()))[2];
typedef int (*(*fp)())[2] ;

int main (void){
    fp ptr1;
    ptr1 =x;
    ptr1();
    return 0;
}

int (*(x()))[2]{
    int (*ary)[2]= malloc(sizeof(ary));
    return &ary;
}
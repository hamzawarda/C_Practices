#include<stdio.h>
#define PRINT(int) printf("int=%d, ", int)

int main(void){
    int x=2, y=3, z=4;
    PRINT(x);
    PRINT(y);
    PRINT(z);
    return 0;
}
#include<stdio.h>


int main(){
    unsigned int array[5] = {1, 2, 3, 4, 5};
    printf("Hello world!\n");
    printf("%p, %p, %p\n", array, array+1, &array+1);
    return 0;
}
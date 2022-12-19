#include<stdio.h>

int main(){
    int array[3][4]={{1},{2,3,4},{5,6}};
    printf("%d, %d \n", sizeof(int), sizeof(array));
    return 0;
}
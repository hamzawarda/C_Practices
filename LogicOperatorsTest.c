#include<stdio.h>
int main (void){
    int i=4, j=8;
    printf("%d, %d, %d, %d\n",i|j&j|i,i|j&&j|i, i^j, i|j);
    return 0;
}
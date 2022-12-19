#include<stdio.h>

int main(){
    static int arr[]={1,3,5};
    printf("%d, %d, %d, %d\n", arr[-1], arr[0], arr[1], arr[5]);
    return 0;
}
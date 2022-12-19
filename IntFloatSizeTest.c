#include<stdio.h>
int main(void){
    printf("%d, %d\n", sizeof(int), sizeof(float));
    struct student{
        int i;
        char c[15];
        char x;
        float t;
    };
    printf("%d\n", sizeof(struct student));
    return 0;
}
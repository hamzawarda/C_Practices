#include <stdio.h>
int arrglob[10];
void main(void){
    static int arrsttic[10];
    printf("Hello, starting.\n");
    printf("static: \n");
    for(int i=0; i<10; i++){
        printf("%d,", arrsttic[i]);
    }
    printf("\n");
    printf("global: \n");
    for(int i=0; i<10; i++){
        printf("%d,", arrglob[i]);
    }
    printf("\n");
}
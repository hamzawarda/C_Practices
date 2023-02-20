#include<stdio.h>
#include<stdlib.h>
int main(void){
    int arr[5][5]={{11,12,13,14,15},{21,22,23,24,25},{31,32,33,34,35},{41,42,43,44,45},{51,52,53,54,55}};
    
    printf("Priting the array:\n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //pointer to intger.
    int * pa= arr;
    printf("Printing from int * pa:\n");
    for(int i=0; i<15; i++){
        printf("%d ",* (pa+i));
    }
    printf("\n");

    //pointer to array of 5.
    int (*par)[5];
    par= arr;
    printf("Printing from int (*par)[5]:\n");
    for(int i=0; i<3; i++){
        printf("%d ",(*(par+i))[2]);
    }
    printf("\n");
    
    //array of pointers.
    int * parr[5];
    parr[0]= arr;
    printf("Printing from int *parr[5]:\n");
    for(int i=0; i<3; i++){
        printf("%d ", *(parr[0]+i));
    }
    printf("\n");

    //pointer to pointer of int.
    int ** ppa;
    ppa= &pa;
    printf("Printing from int ** ppa:\n");
    for(int i=0; i<3; i++){
       printf("%d ", *(*ppa+i));
    }
    printf("\n");

}
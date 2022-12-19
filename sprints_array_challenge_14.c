/*
take array of numbers stored in arr,
return newlist of all the products of 
all other numbers for each element.
ex: input: [1,2,3,4,5]
output: [120,60,40,30,24]
only positive intergers
array size from 1 to 10 at most.
return the output as string separated by hyphen like:
"120-60-40-30-24"
*/

#include <stdio.h>

void ArrayChallenge(int arr[], int arrLength){
    //write the code here.
    //printf("Hello from array challenge function.\n");
    int out[arrLength];
    for(int i=0; i<arrLength; i++){
        out[i]=1; //initializing
        for(int n=0; n<arrLength; n++){
            if(n==i)
                continue;
            out[i]*=arr[n];
        }
    }
    for(int i=0; i<arrLength-1; i++){
        printf("%d-", out[i]);
    }
    printf("%d\n", out[arrLength-1]);
}

int main(void){
    printf("Test Case #1: [1,2,3,4,5] \n");
    int A[]={1,2,3,4,5};
    int arrayLength= 5;
    ArrayChallenge(A, arrayLength);
    printf("Test case #2: [5]\n");
    int B[1];
    B[0]=5;
    ArrayChallenge(B,1);
    return 0;
}
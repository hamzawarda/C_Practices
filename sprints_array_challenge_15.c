/*
take array of integers stored in arr,
determine if any two numbers -excludig the first-
in the array can sum up to the first.
ex: input: [7,3,5,2,-4,8,11]
output: [5,2],[-4,11]
return the output as string like:
"5,2 -4,11"
return -1 if none
*/

#include <stdio.h>

void ArrayChallenge(int arr[], int arrLength){
    //write the code here.
    //printf("Hello from array challenge function.\n");
    int outarr[arrLength][2];
    int i,j,count=0;
    for(i=1; i<arrLength; i++){
        for(j=i+1; j<arrLength; j++){
            if(arr[0]==(arr[i]+arr[j])){
                outarr[count][0]=arr[i];
                outarr[count][1]=arr[j];
                count++;
            }
        }
    }
    if(count==0){
        printf(" -1");
    }
    for(i=0; i<count; i++){
        printf("%d,%d ", outarr[i][0], outarr[i][1]);
    }
    printf("\n");
}

int main(void){
    printf("Test Case #1: [7,3,5,2,-4,8,11] \n");
    int A[]={7,3,5,2,-4,8,11};
    int arrayLength= 7;
    ArrayChallenge(A, arrayLength);
    printf("Test case #2: [1,2,3,4,5]\n");
    int B[]={1,2,3,4,5};
    ArrayChallenge(B,5);
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s); //not working with VScode.
    s = realloc(s, strlen(s) + 1);
    int count[10]={0};
    for(int i=0; num[i]!='\n'; i++){
        if(num[i]=='0')
            count[0]++;
    }    
    for(int i=0; i<10; i++){
        printf("%d ", count[i]);
    }
    printf("\n");
    return 0;
}
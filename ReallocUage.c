#include <stdio.h>
#include <stdlib.h>

/*
realloc just replace memory with another size one. no data trasfer.
*/

int main(void){
    printf("Hello World!\n");
    char * c= malloc(5*sizeof(char));
    c[0]='a';
    c[1]='b';
    c[2]='c';
    c[3]='d';
    c[4]='\0';
    printf("%s\n", c);
    realloc(c, 10*sizeof(char));
    c[0]='a';
    c[1]='b';
    c[2]='c';
    c[3]='d';
    c[4]='e';
    c[5]='f';
    c[6]='g';
    c[7]='h';
    c[8]='i';
    c[9]='\0';
    printf("%s\n", c);
    return 0;
}

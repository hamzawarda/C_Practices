#include <stdio.h>
typedef struct error {
    int worning, err, exception;} ERROR;
int main(void){
    ERROR e;
    e.err=1;
    printf("%d\n", e.err);
    return 0;
}
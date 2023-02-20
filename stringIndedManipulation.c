#include<stdio.h>
#include<string.h>

int main(){
    char c[10][5]={"hi", "c", "devel"};
    printf("%s\n", c[2]);

    char x[100]= "Hello ABCDEFGHIJKLMN";
    x[9]='\0';
    printf("%s \n", x);
    printf("strlen(x)= %d\n", strlen(x));
    
    char y[]= "abcdefghijklmnopqrstuvwxyz";
    y[9]= 0;
    printf("%s\n",y);

    return 0;
}
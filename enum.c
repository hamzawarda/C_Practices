#include<stdio.h>
int main(){
    printf("Hello world\n");
    enum weekDay {Sat=-1, Sun=7, Mon, Tu};
    enum weekDay day;
    day= Tu;
    printf("todya is %d\n", day);
     return 0;
}
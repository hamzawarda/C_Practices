#include<stdio.h>
int main(){
    printf("Hello world\n");
    enum weekDay {Sat=-1, Wed, Sun=7, Mon, Tu};
    enum weekDay day;
    day= Tu;
    printf("todya is %d\n", day);
    day= Wed;
    printf("tomorrow is %d\n", day);
     return 0;
}
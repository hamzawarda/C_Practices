#include<stdio.h>
static int val= 0;
int myfunc(int v){
    return val+v;
}
struct full_byte{
    char first : 4;
    char second : 4;
};
union A{
    char x;
    struct full_byte by;
};
static inline int sqrnum(int G){return G*G;}
int main(void){
    //intro
    printf("Hello, Let's test some intervew strange codes. \n");
    
    //reverse indexing
    printf("return of expresion 5[\"abcdef\"] is: %c \n",5["abcdef"]);
    
    //atoi
    //printf("return of atoi(\"33abc\") is: %d \n", atoi("33abc"));
    
    //convert number to string.
    char x[20];
    sprintf(x, "the value of pi is: %f \n", 3.014965);
    puts(x);
    
    //static variable
    printf("my static return %d for 1 \n", myfunc(1));
    val=20;
    printf("my static return %d for 10 \n", myfunc(10));
    
    //casting
    printf("number 70 as char: %c \n", (char)70);

    char c = 31;
    union A a;
    a.x = c;
    printf("the two nibbles are: %d and %d\n", a.by.first, a.by.second);
    printf("size of char x:4 is : %d \n", sizeof(a.by));

    //inline function useage
    int h = sqrnum(10);
    printf("inline sqare of 10 is: %d \n", h);

    return 0;
}
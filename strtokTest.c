#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "One line sentence that should be breked into words.";
   const char s[2] = " ";
   char *word;
   
   /* get the first token */
   word = strtok(str, s);
   
   /* walk through other tokens */
   while( word != NULL ) {
      printf( "%s\n", word );
      word = strtok(NULL, s);
   }
   
   return(0);
}
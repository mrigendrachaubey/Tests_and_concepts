#include <stdio.h>

int main () {
   FILE *fp;
   char str[60];
   char *eptr;
   int result[3],i=0;
   /* opening file for reading */
   fgets (str, 60, stdin);
   for(i = 0;i<3;i++){
   result[i] = strtol(str, &eptr, 10);   
   printf("%d",result[i]);}
   return(0);
}

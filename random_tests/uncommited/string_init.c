#include <stdio.h>//printf
#include <stdlib.h>//malloc
#include <string.h>//strcpy

int main()
{
char *header = malloc(strlen("Media Player")+1);
printf("%s\n", header);
strcpy(header,"Media Player");
printf("%s\n", header);
return 0;

}

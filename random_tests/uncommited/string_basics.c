#include <stdio.h>
/*
int main()
{
char *str = "sound";//declare str as pointer to char
str[1] = 'L';//not possible as string "string" is made in other memory part that is read only.So whenever you need to do this
//char *str, do it this way,
//const char *str
//here 'declare str' as 'pointer to' 'const char'
printf("%s\n", str);
return 0;
}
*/
int main()
{
char str[] = "sound";
//here str is a array. the array content that is sound is on stack.How ever str cannot point anywhere else now.
str[1] = 's';

printf("%s", str);
return 0;
}

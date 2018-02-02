//fgets
//strtol
#include <stdio.h>

int main()
{
char *s=NULL;//it means s is an uninitialized pointer to char. At begin it doesn't points to anything, possibly it has a random value.
/*At begin it doesn't points to anything, possibly it has a random value.*/
fgets(s, 5, stdin);//so a string is saved, pointed by s. That address can be a random value, or no permission to be accessed.

char ss[5];//compiler does allocate some starting address here at ss that can be accessed inside the program.
printf("%s\n", s);
return 0;
}

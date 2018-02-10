//strtol(pointer to the first digit, pointer to the next character, base)
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p, *s, *f;
	long int li;

	s = "20y";		
	//f = &s[0] + 1;

	li = strtol(s,&s,0);
	/*
	 * At this point, "p" will point at the character 'y' * in the string constant, and "li" would have the
	 * value 20
	 */
	printf("1:li = %ld\n", li);
	return 0;
}


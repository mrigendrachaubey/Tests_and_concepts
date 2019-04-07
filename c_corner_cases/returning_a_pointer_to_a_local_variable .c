/**
** Understand the concept of returning references of a local variable and its effects
**/
#include <stdio.h>

int *func(int *p)
{
	int a;
	a = 56;
	p = &a;
	return p;
}


int main(void)
{
	int *p;
	p = func(p);//here we are passing a pointer.
	printf("%d\n",*p);
	return 0;
}

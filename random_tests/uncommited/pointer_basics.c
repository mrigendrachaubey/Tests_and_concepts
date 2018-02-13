#include <stdio.h>



void func(int *p)
{	
	*p = 46;
}

int main(void)
{
//local scope. Only pointer can take these local value's address and change value at that address in some other function.

	int *p=NULL;
	int a = 45;
	p = &a;
	func(p);
	printf("%d\n",a);
	return 0;
}

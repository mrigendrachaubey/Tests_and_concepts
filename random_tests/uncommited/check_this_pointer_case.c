#include <stdio.h>


void call(int *p)
{
	p = NULL;

}

int main()
{

int *p=NULL;
int a=32;

p = &a;
call(p);

printf("%d", *p);
return 0;
}

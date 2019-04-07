#include <stdio.h>

void func(int *p)
{
*p= 546;
}

int main(void)
{
int a=45, *t;
t=&a;
func(t);
printf("a=%d\n", a);
return 0;
}

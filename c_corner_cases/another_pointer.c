#include <stdio.h>

void func(int *p)
{
int a=3;
p = &a;//
}

int main(void)
{

int *p, b;//p is having garbage
p=&b;//
func(p);
printf("%d\n", *p);
return 0;
}

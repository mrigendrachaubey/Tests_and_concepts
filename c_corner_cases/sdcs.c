#include <stdio.h>

void func(int *p)//this int *p will have what main's p had
{
int a=9;
p=&a;//gave this variable's address
//but because I didn't returned, or did not copied this to main's p, I can't access a in main.
}

int main(void)
{

int *p;
printf("1: %d\n", *p);
func(p);
printf("2: %d\n", *p);
return 0;
}

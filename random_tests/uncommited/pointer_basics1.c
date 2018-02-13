#include <stdio.h>

int *func()
{
int *a;
int b = 43;
a = &b;
return a;
}

int main(void)
{
int *ptr=NULL;
ptr = func();
printf("sds");
printf("*ptr = %d\n", *ptr);
return 0;
}

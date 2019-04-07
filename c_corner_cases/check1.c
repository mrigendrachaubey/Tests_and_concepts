#include <stdio.h>

int * check_func(int *pt)
{
	int a=45;//a is a local variable
	pt = &a;
        printf("1. %p\n", pt);
	return pt;//contains address of a local variable
}

int main(void)
{
	int *pt = NULL;
	pt = check_func(pt);
	printf("randome print\n");
	printf("2. %p\n", pt);
	return 0;
}

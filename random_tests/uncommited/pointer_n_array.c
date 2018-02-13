//int *arr[10]
//declare arr as array 10 of pointer to int

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *arr[3] = {NULL};//array elements are pointer to int type values
	int a=0;//initialization
	int b=0;
	int c=0;
	int i=0;//counter
	
	a = 34;//assignment
	b = 32;
	c = 9;
	
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	
	for(i = 0; i < 3; i++)
		printf("%d ", *arr[i]);

	return 0;


}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *pi = (int*) malloc(sizeof(int));
	*pi = 5;
	printf("*pi: %d\n", *pi);
	printf("%d %p\n", *pi, pi);
	free(pi);//here memory is deallocated but variable pi will still hold the integer’s address
	*pi = 6;
	printf("%d %p\n", *pi, pi);
	//Setting a pointer to NULL after freeing
	pi = NULL;//however if multiple copies of same pointer is there this 
	return 0;
}

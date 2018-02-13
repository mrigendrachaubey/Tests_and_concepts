#include <stdio.h>
#include <stdlib.h>

#define safeFree(p) saferFree((void**)&(p))


//free function does not check the pointer passed
//to see whether it is NULL and does not set the pointer to NULL before it returns.
//So below function does exactly the same
void saferFree(void **pp) 
{
	if (pp != NULL && *pp != NULL) 
	{
		free(*pp);//remove the value
		*pp = NULL;
	}
}

//If I use a single pointer then changes done on p won't be reflecting, as void *p is a local variable in freer.
//that's why we have to use double pointer so that address of passed pointer becomes a value passed by reference. 
//to see this effect this file, check_this_pointer_case.c.
//So to still work with single pointer we have to pass the changes done in p by returning.
//approach 1 is better as we do not need to 
void *freer(void *p)
{
	if(p != NULL)
	{	
		free(p);
		p = NULL;
		
	}
return p;

}
/*

//totally wrong code for intended purpose.

void freer(void *p)
{
	if(p != NULL && &p != NULL)
	{	
		free(p);
		p = NULL;
		
	}
}

*/

int main() 
{
	int *pi;
	pi = (int*) malloc(sizeof(int));
	*pi = 5;
	printf("Before: %p\n",pi);
	//safeFree(pi);//saferFree((void **)&p);
	pi = freer(pi);//no need to cast
	printf("After: %p\n",pi);
	//safeFree(pi);
	pi = freer(pi);
	return (EXIT_SUCCESS);
}





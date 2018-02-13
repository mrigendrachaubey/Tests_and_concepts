/*
When structures are allocated and then deallocated repeatedly, some overhead will be
incurred, resulting in a potentially significant performance penalty. One approach to
deal with this problem is to maintain your own pool of allocated structures.

When a user no longer needs an instance of a structure, it is returned to the pool. When an instance
is needed, it obtains the object from the pool. If there are no elements available in the
pool, a new instance is dynamically allocated. This approach effectively maintains a pool
of structures that can be used and reused as needed.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MEM_POOL_LEN 10

struct person {
	char *name;
	char *occupation;
	int age;
};

typedef struct person per;
//declare pool as array MEM_POOL_LEN of pointer to person
per *pool[MEM_POOL_LEN];//declared as pool is a 'pointer to' an 'array of MEM_POOL_LEN' of type person.

void pool_initialize()
{
	int i=0;
	for(i = 0; i< MEM_POOL_LEN; i++)
		pool[i] = NULL;
}
	
per *getperson() 
{
	int i = 0;	
	per *ptr = NULL;
//traverse to find a free place
	for(i = 0; i < MEM_POOL_LEN; i++)
	{
		if(pool[i] == NULL)
		{
			ptr = pool[i];
			return ptr;	
		}
	}
	if(i == MEM_POOL_LEN)
		printf("No Memory\n");

}

int main(void)
{
	per *ptr;
	//all elements of array are NULL
	pool_initialize();
	ptr = get_person();
	return 0;	


}

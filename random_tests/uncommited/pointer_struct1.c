//wrong way of assigning.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char *name;
	char *occupation;
	int age;
};

typedef struct person prn;

int main(void)
{
	prn *ptr=NULL;
	ptr = malloc(sizeof(prn));//a node size of prn is created. malloc(sizeof(prn)) will be done to allocate object size. Below is another way of allocating memory
//      ptr = malloc(sizeof(*ptr));
	ptr->name = malloc(strlen("Mrigendra") + 1);//
	ptr->occupation = malloc(strlen("SoftwareE")+1);

	strcpy(ptr->name, "Mrigendra");
	strcpy(ptr->occupation, "SoftwareE");
	ptr->age = 20;

	printf("%p", ptr);
	printf("%s\n", ptr->name);
	printf("%s\n", ptr->occupation);
	printf("%d\n", ptr->age);

	free(ptr->occupation);
	free(ptr->name);
	free(ptr);
	return 0;

}

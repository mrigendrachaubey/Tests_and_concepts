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
	prn *ptr = NULL;
	ptr = malloc(sizeof(ptr));
	
	ptr->name = malloc(sizeof(ptr->name) *(strlen("Mrigendra Chaubey")+1) );
	ptr->occupation = malloc( sizeof(ptr->occupation) * (strlen("Software Engineer")+1) );
	ptr->age = 20;
	
	strcpy(ptr->name, "Mrigendra Chaubey");//initialize with strcpy
	strcpy(ptr->occupation, "Software Engineer");

	printf("%s\n", ptr->name);
	printf("%s\n", ptr->occupation);
	printf("%d\n", ptr->age);
	return 0;
}

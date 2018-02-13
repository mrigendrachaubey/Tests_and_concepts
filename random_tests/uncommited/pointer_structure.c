//initiate a structure with pointer.This is one way.
#include <stdio.h>//printf
#include <stdlib.h>//malloc

struct person {
	char *name;
	char *occupation;
	int age;
};

typedef struct person prn;

int main()
{
	prn *ptr=NULL, a;//a is a variable of type prn
	//ptr=&a;

	ptr->name = malloc(sizeof(a.name)*10);
	ptr->occupation = malloc(sizeof(a.occupation)*10);
	ptr->age = 20;
//assiging this way is wrong.  memory assigned to ptr->name is in heap, while assiging pointer to "Mrigendra" makes it to point 
//to read only memory. This is a memory leak.Errors or undefined behaviour while freeing it.
//Thats why we see strcpy to be used when assiging strings to pointer pointed memory.
	ptr->name = "Mrigendra";
	ptr->occupation = "SoftwareE";

	printf("%s\n", ptr->name);
	printf("%s\n", ptr->occupation);
	printf("%d\n", ptr->age);
	return 0;
}

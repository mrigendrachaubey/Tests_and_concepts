//struct and malloc to assign space
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
	prn var;
	var.name = malloc(sizeof(var.name)*(strlen("Mrigendra")+1));
	var.occupation = malloc(sizeof(var.occupation)* (strlen("Software Engineer")+1));
	var.age = 20;
	
	strcpy(var.name, "Mrigendra Chaubey");//strcpy may segfault if the string is not \0 d
	strcpy(var.occupation, "Software Engineer");	
	
	printf("%s %s %d\n", var.name, var.occupation, var.age);
	//better to use strncpy or memcpy
	//memcpy(dest, src, n_bytes);
	memcpy(var.name, "Nikhil Chaubey", strlen("Nikhil chaubey")+1);
	
	printf("%s %s %d\n", var.name, var.occupation, var.age);
	
	free(var.occupation);
	free(var.name);
	return 0;
}

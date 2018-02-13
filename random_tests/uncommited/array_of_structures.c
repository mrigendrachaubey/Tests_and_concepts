#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person{
	char *name;
	char *occupation;
	int age;
};

typedef struct person Person;

int main()
{
int i;
Person arr[2];

for(i = 0; i < 2; i++)
	{
		arr[i].name = malloc(strlen("Mrigendra")+1);
		arr[i].occupation = malloc(strlen("SoftwareE")+1);
		arr[i].age = 24;

	}

for(i = 0; i < 2 ; i++)
	{
		strcpy(arr[i].name, "Mrigendra");
		strcpy(arr[i].occupation, "SoftwareE");
		
	}

for(i = 0; i< 2; i++)
	{
		printf("%s %s %d\n", arr[i].name, arr[i].occupation, arr[i].age);
	}

for(i = 0; i < 2; i++)
	{
		free(arr[i].name);
		free(arr[i].occupation);
		
	}
printf("memory freed\n");
return 0;
}

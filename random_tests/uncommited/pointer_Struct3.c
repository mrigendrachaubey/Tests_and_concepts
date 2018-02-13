//One information is integer size on 64 bit machine will be 4 bytes, while pointer size will be 8 bytes
//64 bit architecture does not alter the integer model compared to 32 bit. Only address/pointer length. 
#include <stdio.h>
#include <stdlib.h>

typedef struct _person {
char* firstName;//4 bytes
char* lastName;//4 bytes
char* title;//4 bytes
unsigned int age;//4 bytes
} Person;


typedef struct _alternatePerson {
char* firstName;//4 bytes
char* lastName;//4 bytes
char* title;//4 bytes
short age;//2 bytes
} AlternatePerson;

int main(void)
{

printf("int:%lu int *:%lu char *:%lu short:%lu\n",sizeof(int), sizeof(int *), sizeof(char *), sizeof(short));
printf("Person:%lu AlternatePerson:%lu\n",sizeof(Person), sizeof(AlternatePerson));
return 0;
}

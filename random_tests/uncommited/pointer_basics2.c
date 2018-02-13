#include <stdio.h>
	

char *f()
{
char a[]="GEORGE";//in local stack.
return a;
}

//this wont work.

//but

char *f()
{
char *a="GEORGE";//in read only memory.
return a;
}

//Reason: "GEORGE" is a literal which has a global scope. 
//while the array which is just a sequence of characters {'S','U','M','I',"T''\0'} has a limited scope and it vanishes
//as soon as the program is returned.

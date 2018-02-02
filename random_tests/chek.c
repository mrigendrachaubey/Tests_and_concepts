#include <stdio.h>

#define ARRAY_SIZE 3

int main()
{
int i=0, a[ARRAY_SIZE] = {0}, b[ARRAY_SIZE] = {0}, c, d;
//for alice
while (i < ARRAY_SIZE && scanf("%d", &a[i]) == 1)
  i++;
i=0;
//for bob
while (i < ARRAY_SIZE && scanf("%d", &b[i]) == 1)   ;
  i++;
for(i=0;i<ARRAY_SIZE;i++)
	printf("%d ",a[i]);
printf("\n");
for(i=0;i<ARRAY_SIZE;i++)
	printf("%d ",b[i]);
printf("\n");
for(i=0;i<ARRAY_SIZE;i++)
{
	if(a[i] < b[i])
		c++;
	else if(a[i] > b[i])
		d++;
	else
		;
}
printf("%d %d",c, d);
return 0;
}

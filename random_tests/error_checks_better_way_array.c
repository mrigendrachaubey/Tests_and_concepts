#include <stdio.h>
#include <ctype.h>

#define ARRAY_SIZE 3

#define BOB_SIZE    5
#define ALICE_SIZE  4

int main()
{
	int tmp, i=0, x=0, y=0;
	char follow;
	int count;
	int a[ALICE_SIZE]={0}, b[BOB_SIZE]={0};

	if((ALICE_SIZE < ARRAY_SIZE) || (BOB_SIZE < ARRAY_SIZE))
	{	
		printf("Not sufficient space in array, check the sizes.\n");
		return -1;;
	} 

	while ((i < ARRAY_SIZE) && (count = scanf("%d%c", &tmp, &follow)) > 0)
	{
	  if ((count == 2 && isspace(follow)) || (count == 1))
	  {
	    a[i++] = tmp;
	  }
	  else
	  {
	    printf ("Bad character detected: %c\n", follow);
	    break;
	  }
	}

	i=0;

	while ((i < ARRAY_SIZE) && (count = scanf("%d%c", &tmp, &follow)) > 0)
	{
	  if ((count == 2 && isspace(follow)) || (count == 1))
	  {
	    b[i++] = tmp;
	  }
	  else
	  {
	    printf ("Bad character detected: %c\n", follow);
	    break;
	  }
	}

	for(i = 0; i < ARRAY_SIZE ; i++)
		printf("%d ", a[i]);

	printf("\n");

	for(i = 0; i < ARRAY_SIZE ; i++)
		printf("%d ", b[i]);

	for(i = 0; i < ARRAY_SIZE ; i++)
	{
		if(a[i] > b[i])
			x++;
		
		if(a[i] < b[i])
			y++;
		else
			;		

	}
	
	printf("%d %d", x, y);
	return 0;
}

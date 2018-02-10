#include <stdio.h>

#define QSIZE 6
//reset value for indexes
int head = -1;
int tail = -1;

int queue[QSIZE]={0};

//enqueue means only element insertion, so only tail will change.Head remains same.
void enqueue(int num)
{
//printf("E1:head : %d tail : %d\n", head, tail);
//first element
if(tail == -1 && head == -1)
	{
		tail = 0;
		head = 0;
	}

        /*when tail is just one less than head*/  /*when tail filled till last element and no deletion has happened*/
else if(       (tail + 1 == head)              ||             (tail == QSIZE-1 && head == 0))
	{
		printf("Queue is full\n");
		return ;
	}

//when tail wraps back and head is not zero.
else if((tail == QSIZE-1) && (head > 0))
	{
		tail = 0;
	}
else
	tail++;//increment tail only if above conditions are not met.

queue[tail] = num;//easiest thing done at last
//printf("E2:tail:%d head:%d\n", tail, head);
}


//in dequeue, everything is based on head index
void dequeue(void)
{
//printf("D1:head : %d, tail:%d\n", head, tail);
if(head == -1)
	printf("Queue is empty\n");

else if(head != tail)
{
queue[head] = 0;
	if(tail > head)
	{
		
		head++;	
	}
	else if(head > tail)
	{
		if(head == QSIZE-1)
			head = 0;
		else
			head++;
	}
	
}
else if(head == tail)
	{
		head = -1;
		tail = -1;
	}
else;	
//printf("D2:head : %d, tail:%d\n", head, tail);
}

void display(void)
{
int index = head, iterations=0;
//if only one or last element, and both indexes are at same place.
while(iterations != QSIZE)
{
	if(index == tail)
	{
		printf("%d", queue[index]);
		return;
	}
	else
	{
		printf("%d ",queue[index]);
		if(index == QSIZE-1)
			index = 0;
		else 
			index++;
	}
iterations++;
}//while ends
return;
}//display ends


int main()
{
int num = 0;
char choice=0;
while(1)
	{
	printf("\nenter choice:");
	//scanf("%c", &choice);//an error. if after enter choice I press 'enter' that will be taken as input.Another thing is getc returns a char. Workaround of this is putting a space before %c to skip leading whitespace like '\n''40' so here '\n' will be skipped. 
	scanf(" %c", &choice);
	//printf("--> choice : %c tmp : %d\n", choice, tmp);
	//not a char
	switch(choice)
		{
		case '1':
			printf("enter number:");
			scanf("%d", &num);
			enqueue(num);
			printf("\n");
			display();
			break;
		case '2':
			printf("dequeue number");
			dequeue();
			printf("\n");
			display();
			break;
		case '3':
			printf("display queue:");
			display();
			break;
		default:
			break;
		}//end of switch

	}//end of while

return 0;
}//end of main

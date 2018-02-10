//single ended queue
//using array
#include <stdio.h>

#define QSIZE 6

int head = -1;
int tail = -1;

int squeue[QSIZE]={0};

void enqueue(int num)
{
if(tail == -1)
	{
		head = 0;
		tail = 0;
	}
else if(tail < QSIZE-1)
	{
		tail++;
	}

else if(tail == QSIZE-1)
	printf("Queue is full\n");

else;

squeue[tail] = num;
}//enqueue

void dequeue()
{
squeue[head] = 0;
if(head == -1)
	printf("Queue is empty\n");
else {
	if(head == tail){
		head = -1;
		tail = -1;	
	 }//inner if
	else
		head++;
     }//outer else
}//dequeue

void display(void)
{
int index = head;
if(head == -1)
{
	printf("Void queue\n");
	return ;
}

while(1)
{
if(index == 0 && tail == 0)
	{
		printf("^^ %d ", squeue[index]);
		return ;
	}

else
	{
		if ( (index < tail) && (tail != 0) )
			{
				printf("## %d ", squeue[index]);
				index++;
			}
		else if(index == tail)
			{
				
				printf("@@ %d ", squeue[index]);	
				return ;	
			}
	}


}//while

}//display.


int main(void)
{
char choice = 0;
int num = 0;
while(1)
{
printf("\nenter choice\n");
scanf(" %c", &choice);
switch(choice)
	{
	case '1':
		printf("Enqueue number\n");
		scanf("%d", &num);
		enqueue(num);
		break;

	case '2':
		printf("Dequeue number\n");
		dequeue();
		break;

	case '3':
		display();
		break;

	default:
		break;
	}//switch.
}//while.


return 0;
}//main.


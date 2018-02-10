#include <stdio.h>
#define SIZE 6

int head = -1;
int tail = -1;
int arr[SIZE] = {0};

void taiyar()
{
	tail = 0;
	head = 0;
}

void dalo(int num)
{
//check if queue is full
printf("a:head : %d, tail : %d\n", head, tail);
if((tail == SIZE - 1 && head == 0) || (tail + 1 == head))
   {
	printf("Queue is full, ab nahi dalo\n");
	return ;
   }

else if(tail == SIZE-1 && head > 0)
   {
	tail=0;
   }
else  if(tail == -1 && head == -1)
   {
	head = head+1;
	tail = tail+1; 
   }
else
	tail = tail+1;
arr[tail] = num;	
printf("b:head : %d, tail : %d\n", head, tail);
}

void nikalo()
{
if(head == -1)
    {
	printf("Queue khali/empty hai.\n");
	return;
    }

else if(head == tail)
   {
	arr[head] = 0;
	head = -1;
	tail = -1;
   }
else
	head=head+1;

}

void dikhao()
{
	int size = SIZE;
	int front = head;
	while(size)
	{
		printf("%d ", arr[front]);
		if(front == SIZE-1)
			front = 0;
		else
			front = front + 1;
	size = size -1;
	}
printf("a:head : %d, tail : %d\n", head, tail);
}

int main()
{
	char choice=0;
	int num = 0;
	//taiyar();
while(1)
{
	scanf("%c", &choice);
	switch(choice){
	case '1':
		printf("Enter element\n");
		scanf("%d", &num);
		dalo(num);
		break;
	
	case '2':
		printf("Nikalo element\n");
		nikalo();
		break;
	case '3':
		dikhao();
		break;
	}
	
}

return 0;
}



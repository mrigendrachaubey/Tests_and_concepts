#include <stdio.h>
#include <stdlib.h>

#define BTB_QDEBUG 0
#define MAX 4

/*making variables global*/
int head=-1, rear=-1, i=0, ele=0;

void shwqueue(int *q_arr)
{
	for(i=0; i < MAX; i++)
		printf("%d ", q_arr[i]);
	printf("\n");
	return;
}

int insertfunc_shwqueue(int *q_arr)
{
	/*
	check if the queue is full, i.e. rear=MAX-1 && head=0 or rear + 1 = head
		no insertions, display queue is full and do a deletion operation. return.
	else if queue is not full, i.e. rear != MAX - 1
		check if queue is not initialized that means if this is the first insertion.
			initialize head.
		insert element at increment rear, insert element. return.
	else if queue is not full due to deletions at head, i.e. head != 0 && rear=MAX -1
		make rear index 0, insert element here
	*/
	printf("Enter element:");
	scanf(" %d", &ele);

	if((rear == MAX-1 && head == 0) || (rear+1 == head)) {
		printf("**Overflow detected, delete some elements**\n");
		return 0;
	}
	else if (rear != MAX-1){
		if(rear == -1 && head == -1)
			head=head+1;
		rear = rear+1;
	}
	else if ((head != 0) && (rear=MAX-1))
		rear=0;
	q_arr[rear]=ele;
	return 0;
}

int deletefunc_shwqueue(int *q_arr)
{
	/*
	replace element with 0 where head is at currently.
	check if the queue is empty, i.e. head==rear
		show underflow message
	else
		increment head to next element.re
	*/
	q_arr[head]=0;
	if (head == rear)
		printf("**Underflow detected, add some elements**\n");
	else
		head = head+1;
	return 0;
}


int main()
{
	int arr[MAX]={0};
	char choice='\0';
	printf("                       **Array based simple circular queue with insertions and deletions.**\n");
	/*
	**pseudo code
	check user input to decide insertion or deletion operation
	insertfunc_shwqueue();
	deletefunc_shwqueue();
	*/
	while(choice != 'e'){
	printf("insert(i), delete(d), exit(e):");
	scanf(" %c", &choice);
	switch(choice)
		{
			case 'i':
				insertfunc_shwqueue(arr);
			break;
			case 'd':
				deletefunc_shwqueue(arr);
			break;
			case 'e':
				shwqueue(arr);
				rear=-1;
				head=-1;
				printf("Exiting the program\n");
				exit(EXIT_SUCCESS);
			default:
				printf("Wrong choice.\n");
			break;
		}
		shwqueue(arr);
	#if BTB_QDEBUG
		printf("rear: %d head: %d\n", rear, head);
	#endif
	}
return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct queue{
	int data;
	struct queue *next;
};

//two pointers to keep track of starting and end of the queue
struct queue *head=NULL;
struct queue *tail=NULL;

/*
          _______________________                   
          |                      |
          ^ 
      | 55  |node2|            | 23  |NULL|
         node1                     node2
        head                   tail


          __________________________     ________________              
          |                         |   |                |
                                    ^                    ^  
      | 55  |node2|            | 23  |node3|    | 29  | NULL|
         node1                     node2           node3
        head                                        tail

*/



void enqueue(int num)
{
	struct queue *node = NULL;;
	node = malloc(sizeof(*node));
	node->data = num;
	//first node
	if(tail == NULL && head == NULL)
	{
		head = node;
		tail = node;
		node->next = NULL;
	}
	
	else
	{
		tail->next = node;
		tail = node;
		node->next = NULL;
	}

}

void dequeue()
{
	struct queue *ptr=NULL;
	if(head == NULL)
		printf("Queue Empty\n");
	else
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}

}

void display()
{
	struct queue *ptr = head;
	while(ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}

}

int main(void)
{
	int num=0;
	char choice = 0;
	while(1)
	{
	printf("Enter choice:");
	scanf(" %c", &choice);
	switch(choice)
		{
			case '1':
				printf("Enter data:");
				scanf("%d", &num);
				enqueue(num);
				break;
			case '2':
				printf("Dequeue data\n");
				dequeue();
				break;
			case '3':
				printf("Display queue:");
				display();
				break;
			default:
				break;

		}//switch
		printf("\n");


	}//while


}



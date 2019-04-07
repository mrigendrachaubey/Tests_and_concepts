#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;	
};

struct node *front = NULL;
struct node *rear = NULL;


void enqueue()
{
	struct node *tmp=NULL;
	tmp = (struct node *)malloc(sizeof(struct node));
	tmp->data = 10;
	tmp->next = NULL;

	if((front == NULL) && (rear == NULL))
	{	
		front = tmp;
		rear = tmp;
	}
	else
	{
		rear->next = tmp;	

	}

}

void dequeue()
{
	if(front == NULL)
		printf("\nqueue is empty\n");
	else
	{
		struct node *tmp = NULL;
		tmp = front;
		front = front->next;
		free(tmp);
	}
}

void display()
{
	if(front == NULL)
		printf("queue is empty\n");
	else
	{
		struct node *tmp;
		tmp = front;
		while(tmp != NULL)
		{
			printf("%d\n", tmp->data);
			tmp = tmp->next;
		}	
	}
}

int main(void)
{
int choice;
while(1)
{
	printf("Menu:\n");
	printf("1:enqueue\n2:dequeue\n3:display");
	printf("enter choice\n");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1:
		enqueue();
		break;
	case 2:
		dequeue();
		break;
	case 3:
		display();
		break;
	
	default:
		exit(0);
		break;

	}

}

}

/*
creating a stack with linked list
push 
pop
display
*/

#include <stdio.h>
#include <stdlib.h>


struct stack {
	int data;
	struct stack *next;
};

//this pointer will keep the stack intact
struct stack *top = NULL;

void push()
{
	struct stack *node;
	node = (struct stack *)malloc(sizeof(struct stack));
	node->data = 10;
	//node->next = NULL;
        if(top == NULL)
		node->next = NULL;
	else
		node->next = top;
	top = node;
}
void pop()
{
	struct stack *tmp;
	if(top == NULL)
		printf("\nstack is empty\n");
	else
	{
		tmp = top;
		top = top->next;
		//printf("top = %p\n", top);
		free(tmp);
	}
}

void display(void)
{
	struct stack *tmp;
	tmp = top;
	if(top == NULL)
		printf("\nstack is empty\n");
	else
	{

		while(tmp->next != NULL)
		{	
			printf("%d\n", tmp->data);
			tmp = tmp->next;	
		}
		printf("%d\n", tmp->data);
	}
}

int main(void)
{
	int choice;
	while(1)
	{
		printf("\n****** MENU ******\n");
		printf("1:push\n2:pop\n3:display stack\n4:exit\n");
		printf("Enter your choice baby ;)");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				break;
	

		}

	}
	return 0;
}

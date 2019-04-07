/*
**create a linked list
*/

/*
**1.create 5 nodes
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void create_list(struct node *start)
{
	struct node *list = NULL;//this is a local variable. Once the function returns these variables will die
	list = (struct node *)malloc(sizeof(struct node));//heap memory allocated
	list->data = 5;
	list->next = NULL;
	start = list;//start points to a memory in heap
}


int main(void)
{
	struct node *start = NULL;
	create_list(start);
	printf("start = %d\n", start->data);
	return 0;
}



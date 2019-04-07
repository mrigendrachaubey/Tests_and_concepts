#include <stdio.h>
#include <stdlib.h>



struct node{
	struct node *prev;
	int data;
	struct node *next;
};


create_linked_list()
{

struct node *start, *node;

while(num_of_nodes)
{
	node = (struct node *)malloc(sizeof(struct node));
	if(start == NULL)
	{
		start = node;
		node->prev = NULL;
		node->next = NULL;
		prev = node;	
	}
	else
	{
		prev->next = node;
		node->next = NULL;
		node->prev = prev;

	}
	node->data = data;
	num_of_nodes = num_of_nodes-1;
}

}




int main(void)
{


}

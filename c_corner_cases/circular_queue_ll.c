#include <stdio.h>
#include <stdlib.h>

struct ring_buf{
    int data;
    struct ring_buf *next;
};

typedef struct ring_buf ring_buf;
ring_buf *head=NULL;
ring_buf *rear=NULL;


void insert_node(int *data)
{
	ring_buf *node=malloc(sizeof(ring_buf));
	node->data=*data;
	if (rear == NULL && head == NULL){
		head=node;
		rear=node;
		node->next=head;
	}
	else{
		rear->next=node;
		rear=node;
		node->next=head;
	}
}

void delete_node()
{
	ring_buf *temp=NULL;
	temp=head;
	rear->next=head->next;
	head=head->next;
	free(temp);
}

void shwqueue()
{
	printf("in showqueue\n");
	ring_buf *traver=NULL;
	traver=head;
	while(1){
		printf("%d ", traver->data);
		traver=traver->next;
		if(traver == head)
			break;
	}
	printf("\n");
}

int main()
{
	char choice='\0';
	int data=0;
	 printf("                       **Base ring buffer queue**\n");
	/*
	**pseudo code**
	create a node
	add data
	*/
	while(1)
	{
		printf("insert(i), delete(d), exit(e):");
		scanf(" %c", &choice);		
		switch(choice)
		{
			case 'i':
				printf("enter data");
				scanf(" %d", &data);
				insert_node(&data);
				break;
			case 'd':
				delete_node();
			break;
			case 'e':
				printf("TODO: yet to implement exiting\n");
			break;
			default:
			break;
		}
		shwqueue();
	}
	return 0;
}

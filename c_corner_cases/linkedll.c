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

struct node *create_list(struct node *start)
{
struct node *list=NULL;//this is a local variable. Once the function returns these variables will die
struct node *prev=NULL;//
int num_of_nodes = 5;
while(num_of_nodes)
  {

     list = (struct node *)malloc(sizeof(struct node));//heap memory allocated
     list->data = num_of_nodes;
     list->next = NULL;
     num_of_nodes = num_of_nodes - 1;
     if(start == NULL)
	{
		start = list;
		prev = list;
	}
     else
	{
                prev->next = list;
		prev = list;
		
	}
  }//end of while
printf("%p\n", start);
return start;
}//end of create_list

void show_list(struct node *start)
{
	
	struct node *tr, *pt;
	pt = start;
        printf("hello\n");
        while(pt != NULL)
	{
		printf("%d ", pt->data);
                pt = pt->next;
        }
        printf("hello2\n");
} 

int main(void)
{
struct node *start=NULL;
start = create_list(start);
printf("start = %p\n", start);
show_list(start);

return 0;
}



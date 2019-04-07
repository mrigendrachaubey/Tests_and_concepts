#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX], top = -1;



void push(int val)
{
if(top == MAX - 1 )
{
	printf("stack overflow\n");
}
else
{
	top++;
	stack[top] = val;
}
}
int pop()
{
int val=0;
if(top == -1)
{
	printf("stack underflow\n");
	return -1;
}
else
{
	val = stack[top];//take the top value
	top--;//decrease the index
	return val;//return the value

}
}

void peek()
{
}

void display()
{
int i=0;
if(top == -1)
	printf("stack is empty\n");
else
{
	printf("printing stack\n");
	for(i=top;i>=0;i--)
		printf("%d ", stack[i]);
}
printf("\n");
}


int main()
{
int option, val;


do{
	printf("enter the option\n");
	printf("1: PUSH\n");
	printf("2: POP\n");
	printf("3: Peek\n");
	printf("4: Display\n");
	printf("5: exit\n");
	scanf("%d", &option);

	switch(option)
	{
		case 1:
			printf("push element\n");
			scanf("%d", &val);
			push(val);
			break;
		case 2:
			printf("pop element\n");
			val = pop();		
			if(val != -1)	
				printf("removed %d\n", val);
			break;
		case 3:
			printf("peek top\n");
			peek();
			break;
		case 4:
			printf("display\n");
			display();
			break;
		case 5:
			printf("exit\n");
			break;
		default:
			printf("enter proper option\n");
			break;
	}

}while(option != 5);
return 0;
}

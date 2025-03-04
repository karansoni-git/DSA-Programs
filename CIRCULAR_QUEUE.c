//this prograam is not completed
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int front=-1,rear=-1;
int queue[size];
void insert()
{
int n;
printf("enter a number:");
scanf("%d",&n);
if(front==0 && rear==size-1)
	{
		printf("---QUEUE IS FULL!!---");
	}
else if(front<0)
	{
		front=rear=0;
		queue[rear]=n;
		printf("%d successfully inserted-\n",queue[rear]);
	}
else if(rear==size-1)
	{
		rear=0;
		queue[rear]=n;
		printf("%d successfully inserted--\n",queue[rear]);
	}
else
	{
		rear++;
		queue[rear]=n;
		printf("%d successfully inserted---\n",queue[rear]);
	}
}

void del()
{
	if(front<0)
	{
		printf("---QUEUE IS EMPTY!---");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==size-1)
	{
		front=0;
	}
	else
	{
		front++;
		printf("%d deleted successfully!",queue[front-1]);
	}
}

void display()
{
	int i;
	if(front<0)
	{
		printf("---QUEUE IS EMPTY!---");
	}
	else if(front>rear)
	{
		for(i=0;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		for(i=front;i<=size-1;i++)
		{
			printf("%d ",queue[i]);
		}
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}

int main()
{
	int ch;
	printf("\n1. insert");
	printf("\n2. delete");
	printf("\n3. display");
	printf("\n4. exit");
	while(1)
	{
		printf("\nenter tour choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
			break;
			
			case 2:del();
			break;
			
			case 3:display();
			break;
			
			case 4:exit(0);
			
			default:printf("invalid choice");
			break;
		}
	}
	getch();
	return 0;
}

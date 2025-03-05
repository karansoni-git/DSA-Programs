//this is queue where insertion done only from front but deletion can be done from front-end and rear-end
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 10
int queue[size];
int front=-1,rear=-1;//here rear performing deletion task from start and end
void Insert()
{
	int num;
	if(rear>=size-1)
	{
		printf("\n---QUEUE IS FULL!!---");
	}
	else
	rear++;
	printf("\nenter a number:");
	scanf("%d",&num);
	queue[rear]=num;
	if(rear==0)
	{
		front=0;
	}
}

void DeleteFromStart()
{
	if(front<0 || front>rear)
	{
		printf("---QUEUE IS EMPTY!!---");
	}
	else
	{
		front++;
		printf("%d deleted successfully",queue[front-1]);
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}
void DeleteFromEnd()
{
	if(rear<front || rear<0)
	{
		printf("---QUEUE IS EMPTY!!---");
	}
	else
	{
		printf("%d deleted successfully",queue[rear]);
		rear--;
		if(rear<front)
		{
			rear=-1;
			front=-1;
		}
	}
}
void Display()
{
	int i;
	if(front<0)
	{
		printf("\n---QUEUE IS EMPTY!!---");
	}
	else
	{	
		printf("QUEUE:");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
int main()
{
	int ch;
	printf("\n1.Insert");
	printf("\n2.Delete From Start");
	printf("\n3.Delete From End");
	printf("\n4.Display");
	printf("\n5.Exit");
	while(1)
	{
		printf("\nenter a choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:Insert();
			break;
			
		    case 2:DeleteFromStart();
			break;
		
			case 3:DeleteFromEnd();
			break;
		
			case 4:Display();
			break;
		
			case 5:exit(0);

			default:printf("---invalid choice---");
		}
	}
getch();
return 0;
}

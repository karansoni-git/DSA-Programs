//performing in first in first out discipline/manner.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5 //define size 5 globaly
int front=-1,rear=-1; // rear for inserting element in array while front for deletion of element.
int queue[size]; //global declaration of queue[10]
void insert()
{
int n;
	if(rear>=size-1) //size-1 because index start with 0.
	{
	printf("\nqueue is full\n");
	}
else
	{
		rear++;
		printf("\nenter a number:");
		scanf("%d",&n);
		queue[rear]=n;
		printf("\nsuccessfully inserted element:%d\n",queue[rear]);
		if(rear==0)
		{
			front=0;
		}
	}
}

void del()
{
if(front<0) //if(-1<0) true then print queue is empty.
	printf("\nqueue is empty\n");
else
	{
//		int target;
//		target=front;
		front++;
		printf("\nsuccessfully deleted:%d\n",queue[front-1]);
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}

void display()
{
int i;
if(front<0)
	printf("\nqueue is empty\n");
else
	{
		printf("\nQUEUE:");
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}		
}

int main()
{
int ch;
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.display");
printf("\n4.exit");

while(1)
{
	printf("\nenter your choice:");
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
		default:printf("invalid choice!");
		break;		
	}
}
getch();
return 0;
}

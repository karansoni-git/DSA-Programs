#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
int tos=-1;
int stack[size];
void push()
{
	int n;
	if(tos>=size-1)
	{
		printf("\n---------stack is full!---------");
	}
	else
	{
		tos++;
		printf("\nEnter A Data:");
		scanf("%d",&n);
		stack[tos]=n;
	}
}

void pop()
{
if(tos<0)
{
printf("\n---------stack is empty---------");
}
else
{
printf("\n%d element deleted",stack[tos]);
tos--;
}
}

void peek()
{
	int pos;
if(tos<0)
	{
		printf("\n---------stack is empty!!---------");
	}
else
  	{	
	printf("\n\nenter the position:");
	scanf("%d",&pos);
	if(pos<0 || pos>tos+1)
	{
		printf("\n---------out of range---------");
	}
	else
	{
		printf("\npeeked element is:%d\n",stack[tos-pos+1]);
	}
  	}
}

void update()
{
int pos;
if(tos<0)
	{
		printf("\n---------stack is empty---------");
	}
else
	{
		printf("\nenter the position for entering new value:");
		scanf("%d",&pos);
		if(pos<0 || pos>tos+1)
		{
			printf("\n---------out of range---------");
		}
		else
		{
			printf("\nenter new vlaue:");
			scanf("%d",&stack[tos-pos+1]);
			printf("\n%d element updated",stack[tos-pos+1]);
		}
	}
}

void display()
{
int i;
if(tos<0)
	{
		printf("\n---------stack is empty---------");
	}
else
	{
		for(i=tos;i>=0;i--)
		{
		//printf("\n_________");
		printf("\n|   %d   |\n",stack[i]);
		printf("__________\n");
		}
	}
}
int main()
{
int ch;
printf("\n1.push");
printf("\n2.pop");
printf("\n3.peek");
printf("\n4.update");
printf("\n5.display");
printf("\n6.exit");
while(1)
{
	printf("\n\nenter your choice:");
	scanf("%d",&ch);
switch(ch)
{
	case 1:push();
	break;
	case 2:pop();
	break;
	case 3:peek();
	break;
	case 4:update();
	break;
	case 5:display();
	break;
	case 6:exit(0);
	default:printf("invalid choice");
	break;
}
}
getch();
return 0;
}


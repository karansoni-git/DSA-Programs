#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *str=0;
struct node *createnode()
{
	struct node *k;
	k=(struct node*)malloc(sizeof(struct node));
	printf("enter a data:");
	scanf("%d",&k->data);
	k->next=0;
	return k;
}
void InsertStr()
{
	struct node *a,*b;
	a=createnode();
	if(str==0)//first node
	{
		str=a;
	}
	else
	{
		a->next=str;
		b=str;
		if(b->next==0)
		{
			b->next=a;
			str=a;
		}
		else
		{
			while(b->next!=str)
			{
				b=b->next;
			}
			    b->next=a;
				str=a;
		}
	}
}

void InsertEnd()
{
	
}

void DeleteStr()
{
	
}

void DeleteEnd()
{
	
}

void Display()
{
	struct node *dis;
	if(str==0)
	{
		printf("No Node Is Available");
	}
	else
	{
		do
		{
			printf("%d ",dis->data);
			dis=dis->next;
		}while(dis->next==str);
	}
}

int main()
{
int ch;
printf("\n1. inserting from start");
printf("\n2. inserting from end");
printf("\n3. deleting from start");
printf("\n4. deleting from end");
printf("\n5. display");
printf("\n6. exit");

while(1)
{
printf("\n\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:InsertStr();
break;
case 2:InsertEnd();
break;
case 3:DeleteStr();
break;
case 4:DeleteEnd();
break;
case 5:Display();
break;
case 6:exit(0);
default:printf("\ninvalid choice");
break;
}
}
getch();
return 0;
}

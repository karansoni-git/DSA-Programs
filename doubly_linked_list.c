#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 struct node *prev;
 int data;
 struct node *next;	
};

struct node *start=0; //global declaration.

struct node *createnode()
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node)); 
	printf("Enter A Data:");
	scanf("%d",&new->data);
	new->prev=0;
	new->next=0;
	return new;
}

void insertstart()
{
	struct node *a;
	a=createnode();
	if(start==0)
	{
		start=a;
	}
	else
	{
		a->next=start; //connecting this new node to next node.
		start->prev=a; //giving address to old node prev part of new node address
		start=a; //connecting start to new node.
	}
}

void insertend()
{
	struct node *b,*m; //b for new node 
	b=createnode();
	if(start==0)
	{
		start=b;
	}
	else
	{
		m=start;
		while(m->next!=0) //increasing m until get m->next==0
		{
			m=m->next; //increament.
		}
		m->next=b;  //connecting old node to new node
		b->prev=m->next; //connecting new to old node.
	}
}

void deletestart()
{
	struct node *delstr;
	if(start==0)
	{
		printf("No Node Available For Delete");	
	}	
	else
	{
		if(start->next==0) //this situation occurs when only one node is available
		{
			printf("%d deleted successfully",start->data);
			free(start);
			start=0;
		}
		else
		{
		delstr=start;
		start=start->next;
		delstr->next=0; 	
		start->prev=0;
		printf("%d deleted successfully",delstr->data);
		free(delstr);
		}
	}
}

void deleteend()
{
struct node *delend,*h;
	if(start==0)
	{
		printf("No Node Available For Delete");
	}	
	else
	{
		if(start->next==0) //this situation occurs when only one node is available
		{
			printf("%d deleted successfully",start->data);
			free(start);
			start=0;
		}
		else
		{
			h=start;
			while(h->next->next!=0) //for reaching node address.
			{
				h=h->next;
			}
			delend=h->next; //this delend is holding address of the node which we will delete.
			delend->prev=0; //disconnecting each other.
			h->next=0;      //disconnecting each other.
			printf("%d deleted successfully",delend->data);
			free(delend); //deleting the last node.
		}
	}
}

void display()
{
	struct node *t;
	t=start;
	if(start==0)
	{
		printf("No Data Available");
	}
else
	{
		while(t!=0)
		{
		printf("%d ",t->data);
		t=t->next;
		}
	}
}

int main()
{
int ch;
printf("\n1. insertingg from start");
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
case 1:insertstart();
break;
case 2:insertend();
break;
case 3:deletestart();
break;
case 4:deletestart();
break;
case 5:display();
break;
case 6:exit(0);
default:printf("\ninvalid choice");
break;
}
}
getch();
return 0;
}

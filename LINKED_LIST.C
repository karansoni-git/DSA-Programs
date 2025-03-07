#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node   //global declaration
{
int data;
struct node *next;
};
struct node *start=0; //global declaration

struct node *createnode() //function type is struct node bcuz k is returning same type of data
{
struct node *k;
k=(struct node*)malloc(sizeof(struct node));
printf("Enter a Data:");
scanf("%d",&k->data);
k->next=0;  //first node storing 0 in its address.
return k; //returning k bcuz k hold address of node
}

void insertstart()
{
struct node *k1;  
k1=createnode();
if(start==0)
{
start=k1; //first node address given to start variable
}
else
{
k1->next=start; //connecting to the old node
start=k1; //giving address of new node to start
}
}

void insertend()
{
	struct node *e,*p;
	e=createnode();
	if(start==0)
	{
		start=e;
	}
	else
	{
		p=start;
		while(p->next!=0)
		{
			p=p->next;
		}
		p->next=e;
	}
}

void insertmid()
{
	struct node *pd,*j,*g;
	g=createnode();
	if(start==0)
	{
		start=g;
	}
	else
	{
	int pos;
    printf("enter a data position for entering new data before its position:");
    scanf("%d",&pos); 
    pd=start;
    while(pd->next->data!=pos) //finding same data from list.
    {
    	pd=pd->next;   //inscreasing until the same data not found.
	}
    j=pd->next; // j is temporary storing address of pd.
    pd->next=g; //connect to the new inserted data. 
    g->next=j;  //giving address of next node to the new node.
    printf("data inserted sucessfully before %d",pos);
	}
}
void deletestart()
{
struct node *del;
if(start==0)
{
printf("no node available for delete");
}
else
{
	if(start->next==0)//deleting last node
	{
		printf("%d deleted successfully",start->data);
		free(start);
		start=0;
	}
	else
	{
		del=start;
		start=start->next;
		del->next=0;
		printf("%d deleted successsfully",del->data);
		free(del);
	}
}
}

void deleteend()
{
	struct node *a,*b;
	if(start==0)
	{
		printf("no node available for delete");
	}
	else
	{
		if(start->next==0)//deleting last node
		{
			printf("%d deleted successfully",start->data);
			free(start);
			start=0;
		}
		else
		{
			a=start;
		while(a->next->next!=0)
		{
			a=a->next;
		}
			b=a->next;  //this b is holding the address of last node that we will delete
			a->next=0;  //now we give 0 address to the last previous node for disconnecting each other 
			printf("%d deleted successfully",b->data);
			free(b);	
		}
	}
}

void deletemid()
{
	struct node *a,*b,*c;
	if(start==0)
	{
		printf("no node available for delete");
	}
	else
	{
		int sel;
		printf("enter a data that you want to delete:");
		scanf("%d",&sel);
		a=start;
		while(a->next->data!=sel)
		{
			a=a->next;
		}
		c=a->next->next; //this c is connected to the last node;
		a->next->next=0; //disconnecting the node that will be deleted
		b=a->next; //b is connected to node that will be deleted.
		a->next=c; //connecting to the next node that after the deleted node.
		printf("%d deleted successfully.",sel);
		free(b); //deleting the node.
	}
}

void display()
{
	struct node *d1;
	d1=start;
	if(d1==0)
	{
		printf("No Data Available");
	}
	else
	{
		while(d1!=0)
		{
			printf("%d ",d1->data);
			d1=d1->next;	
		}
	}
}
	
int main()
{
int ch;
printf("\n1. inserting from start");
printf("\n2. inserting from end");
printf("\n3. inserting from middle");
printf("\n4. deleting from start");
printf("\n5. deleting from end");
printf("\n6. deleting from middle");
printf("\n7. display");
printf("\n8. exit");

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
case 3:insertmid();
break;
case 4:deletestart();
break;
case 5:deleteend();
break;
case 6:deletemid();
break;
case 7:display();
break;
case 8:exit(0); //this function is contain in stdlib.h
default:printf("\ninvalid choice");
break;
}
}
getch();
return 0;
}

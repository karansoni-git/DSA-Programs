#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *info;
};
struct node *tos=0;
//struct node *createnode()
//{
//	struct node *a;
//	a=(struct node*)malloc(sizeof(struct node));
//	printf("Enter a data:");
//	scanf("%d",&a->data);
//	a->info=0;
//	return a;
//}

void push()
{
	struct node *b;
	b=(struct node*)malloc(sizeof(struct node));
	printf("Enter a data:");
	scanf("%d",&b->data);
	b->info=0;
	if(tos==0)
	{
		tos=b;
	}
	else
	{
		b->info=tos;
		tos=b;
	}
}

void pop()
{
	if(tos==0)
	{
		printf("No Node Available For Pop\n");
	}
	else
	{
		struct node *del;
		del=tos;
		tos=tos->info;
		del->info=0;
		printf("Poped Element:%d\n",del->data);
		free(del);
	}
}

void display()
{
	struct node *dis;
	dis=tos;
	if(dis==0)
	{
		printf("---No Data Available---\n");
	}
	else
	{
		printf("---STACK---\n");
		while(dis!=0)
		{
			printf("%d\n",dis->data);
			dis=dis->info;
		}
	}
}

int main()
{
	int ch;
	printf("\n1. Push");
	printf("\n2. Pop");
	printf("\n3. Display");
	printf("\n4. Exit");
	
	while(1)
	{
		printf("\nEnter Your Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			
			case 2:pop();
			break;
			
			case 3:display();
			break;
			
			case 4:exit(0);
			
			default:printf("---Invalid choice---");
			break;
		}
	}
	getch();
	return 0;
}


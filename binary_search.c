/*Binary search is an efficient algorithm used to find a target value in a sorted array. 
It works by repeatedly dividing the search interval in half until the target value is found or the search interval is empty.
How it works:
1. Start with the middle element:

If the middle element is the target value, the search is complete.
If the target value is less than the middle element, search the left half.
If the target value is greater than the middle element, search the right half.

2. Repeat the process until the value is found or the interval is empty.*/
//this program is runs only on sorted data.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	//user defined array size.
//	int a[]={43,10,21,29,18,57};
	int a[100];
	int low,high,i,mid,search,n;
	printf("enter an array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter at a[%d]:",i);
		scanf("%d",&a[i]);
		if(i>0)
		{
			if(a[i-1]>a[i])
			{
				printf("please enter in ascending order!!");
				exit(0);
			}
		}
	}
	low=0;high=n-1;
	printf("enter a number that you want to search:");
	scanf("%d",&search);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==search)
		{
			printf("number is found");
			break;
		}
		else if(a[mid]>search)
		high=mid-1;
		else if(a[mid]<search)
		low=mid+1;
	}
	if(low>high)
	{
		printf("number is not found");
	}
	getch();
	return 0;
}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int a[10]={14,18,27,32,44,52,57,63,78,91};
//	int i,low=0,high=9,mid,search; //high=n-1;
//	printf("array:\n");
//	for(i=0;i<10;i++) 
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\nenter a number that you want to search:");
//	scanf("%d",&search);
//	while(low<=high)
//	{
//		mid=(low+high)/2;
//		if(a[mid]==search)
//		{
//			printf("---number is found---");
//			break;
//		}
//		else if(a[mid]>search)
//		{
//			high=mid-1;
//		}
//		else if(a[mid]<search)
//		{
//			low=mid+1;
//		}
//	}
//	if(low>high)
//	{
//		printf("---number is not found---");
//	}
//	getch();
//	return 0;
//}

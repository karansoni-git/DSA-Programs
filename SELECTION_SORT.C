/* in selection sort we are select one element as a min element 
and compare this element to every element that is in an array */
#include<stdio.h>
#include<conio.h>
int main()
{
int a[20];
int i,j,temp,pivot,min,n;
printf("enter range:");
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d number:",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)// example for(i=0;i<number of elements in array - 1;i++)
	{
		min=a[i]; //min variable is for showing that minimum number in an array
		pivot=i;
		
		for(j=i+1;j<n;j++)//example for(i=0;i<number of elements in array;i++)
		{
			if(min>a[j])
			{
				min=a[j]; //if condition getting true  than present number become a minimum number of an array 
				pivot=j;
			}
		}
		temp=a[i];
		a[i]=a[pivot];
		a[pivot]=temp;
	}
		printf("sorted array:\n");//example for(i=0;i<number of elements in array;i++)
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
getch();
return 0;
}

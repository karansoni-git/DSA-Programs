#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],i,ind,r;
	printf("enter a range:");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		printf("element at a[%d]:",i);
		scanf("%d",&a[i]);
	}
	printf("enter a index that want to search:");
	scanf("%d",&ind);
	if(ind>=r)
	{
		printf("---out of range---");
	}
	else
	{
		printf("---index is found---");
	}
	getch();
	return 0;
}


/*other methods to find index
Method-1:
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,search,n,counter=0;
	printf("enter a size of an array:");
	scanf("%d",&n);
	printf("\nenter %d elements:",n);
	for(i=0;i<n;i++)
	{
		printf("element at a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\neneter a index that you want to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==i)
		{
			printf("\nindex is found and value at a[%d]:%d",i,a[i]);
			counter++;
			break;
		}
	}
	if(counter==0)
		{
			printf("\nindex is not found");
		}
	getch();
	return 0;
}
*/

/*Method-2:
#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,ind,i;
printf("\nEnter array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter array elements a[%d]:",i);
scanf("%d",&a[i]);
}
printf("\nEnter index value to be searched:");
scanf("%d",&ind);
if(ind>n)
printf("\nYou have entered wrong index");
else
printf("\nThe element at index %d is %d",ind,a[ind]);
getch();
return 0;
}
*/

#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,i,j,temp,change;
printf("enter a size of an array:");
scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nunsorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		change=0;
	for(j=i-1;j>=0;j--)
	{
		if(temp<a[j])
		{
			a[j+1]=a[j];
			a[j]=temp;
		}
			change++;
	}
		if(change==0)
		break;
	}
	printf("\nsorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
getch();
return 0;
}

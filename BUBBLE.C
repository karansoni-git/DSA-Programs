#include<stdio.h>
#include<conio.h>
int main()
{
int a[20];
int i,j,temp,n;
printf("enter range:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter number %d:",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n-1;j++)
{
	if(a[j]>a[j+1])
{
	temp=a[j+1];
	a[j+1]=a[j];
	a[j]=temp;
}
}
}
printf("sorted array:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
return 0;
}

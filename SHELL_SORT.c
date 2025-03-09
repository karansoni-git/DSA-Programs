#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],n,i,num,k,j;

printf("\nEnter array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter array elements a[%d]:",i);
scanf("%d",&a[i]);
}
printf("\nEnter maximum number (odd value):");
scanf("%d",&num);
while(num>=1)
{
for(j=num;j<n;j++)
{
k=a[j];
for(i=j-num;i>=0 && k<a[i];i=i-num)
a[i+num]=a[i];
a[i+num]=k;
}
printf("\nIncrement=%d\n",num);
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n");
num=num-2;
}
printf("\nSorted array");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
getch();
return 0;
}


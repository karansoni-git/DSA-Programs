#include<stdio.h>
#include<conio.h>
int main()
{
int a[100],r,i,c=0,s;
printf("enter range:");
scanf("%d",&r);
for(i=0;i<r;i++)
{
printf("number at index a[%d]:",i+1);
scanf("\n%d",&a[i]);
}
printf("enter the number that you want to search:");
scanf("%d",&s);
for(i=0;i<r;i++)
{
if(a[i]==s)
{
printf("number is found and its position is:%d",i+1);
c++;
break;
}
}
if(c==0)
{
printf("number is not found");
}
getch();
return 0;
}

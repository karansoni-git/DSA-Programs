#include<stdio.h>
#include<conio.h>
int main()
{
int n[10],i,c=0,s;
printf("enter 10 numbers:\n");
for(i=0;i<10;i++)
{
scanf("%d",&n[i]);
}
printf("enter a number that you want to search:");
scanf("%d",&s);
for(i=0;i<10;i++)
{
if(n[i]==s)
c++;  //increasing c if number found.
}
if(c==0)
{
printf("number is not found"); //occurs when number is not match in array.
}
else
{
printf("number found and its position is a[%d]",i);
}
getch();
return 0;
}


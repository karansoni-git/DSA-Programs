/*Bubble Sort is a simple sorting algorithm in Data Structures and Algorithms (DSA) that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

How Bubble Sort works:

1. Start at the beginning of the list.
2. Compare adjacent elements:
  =>If the current element is greater than the next element, swap them.
3. Move to the next pair of elements and repeat the comparison and swap.
4. After each pass, the largest unsorted element bubbles up to its correct position at the end of the list.
5. Repeat the process for the remaining unsorted portion of the list.
6. Stop when no swaps are needed, indicating the list is sorted.*/

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

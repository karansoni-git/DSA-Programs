#include<stdio.h> 
#include<conio.h> 
int a[100]; 
void m_sort(int,int); 
void merge_sort(int,int,int); 
int main() 
{ 
 int n,i;  
 printf("\nEnter array size:"); 
 scanf("%d",&n); 
 for(i=0;i<n;i++) 
 { 
  printf("\nEnter array elements a[%d]:",i); 
  scanf("%d",&a[i]); 
 } 
 printf("\n\nUnsorted array"); 
 for(i=0;i<n;i++) 
 { 
  printf("\t%d",a[i]); 
 } 
 m_sort(0,n-1); 
 printf("\n\nSorted array"); 
 for(i=0;i<n;i++) 
 { 
  printf("\t%d",a[i]); 
 } 
 getch();
 return 0; 
} 
void m_sort(int low,int high) 
{ 
 int mid; 
 if(low!=high) 
 { 
  mid=(low+high)/2; 
  m_sort(low,mid); 
  m_sort(mid+1,high); 
  merge_sort(low,mid,high); 
 } 
} 
void merge_sort(int low,int mid,int high) 
{ 
 int i,j,k,temp[100]; 
 i=low; 
 j=mid+1; 
 k=low; 
 do 
 { 
  if(a[i]>=a[j]) 
   temp[k++]=a[j++]; 
  else 
   temp[k++]=a[i++]; 
 }while((i<=mid)&&(j<=high)); 
 while(i<=mid) 
  temp[k++]=a[i++]; 
 while(j<=high) 
  temp[k++]=a[j++]; 
 for(i=low;i<=high;i++) 
 { 
  a[i]=temp[i]; 
 } 
} 

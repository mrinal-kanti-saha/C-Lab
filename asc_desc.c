#include<stdio.h>
void check(int a[],int n)
{
  int c=1,d=1,e=0;
  for(int i=0;i<n-1;i++)
  {
    if(a[i]>a[i+1])
    {
      c=c+1;
    }
    else if(a[i]<a[i+1])
    {
      d=d+1;
    }
    else 
    {
      e=e+1;
    }  
  }
  if((c+e)==n)
    printf("Array is sorted.DESCENDING!!!");
  else if((d+e)==n)
    printf("Array is sorted.ASCENDING!!!");
  else
    printf("Array is NOT sorted!!!");
}
void main()
{
  int size=0;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int arr[size];
  for(int i=0;i<size;i++)
    arr[i]=0;
  printf("Enter the element:");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  check(arr,size);
}

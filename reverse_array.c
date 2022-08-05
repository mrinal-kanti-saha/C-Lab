#include<stdio.h>
int reverse(int a[],int n)
{ 
  int t=0;
  for(int i=0;i<n/2;i++)
  {
    t=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=t;
  }
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
  reverse(arr,size);
  printf("The reversed array : ");
  for(int i=0;i<size;i++)
  {
    printf("%d ",arr[i]);
  } 
}

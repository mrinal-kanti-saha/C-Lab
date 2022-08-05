#include<stdio.h>
float avg(int [],int);
void disp(int [],int,int);
void main()
{
  int size=0;float a=0;
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
  a=avg(arr,size);
  printf("The elements above average i.e. %f are :-\n",a);
  disp(arr,a,size);
}
float avg(int arr[],int size)
{
  int sum=0;
  for(int i=0;i<size;i++)
    sum=sum+arr[i];
  return (sum*1.0/size);
}
void disp(int arr[],int a,int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]>a)
      printf("%d\n",arr[i]);
  }
  return;
}

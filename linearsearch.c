#include<stdio.h>
void search(int a[],int n,int x)
{
  int c=0,index=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==x)
    {
      c=1;index=i;
      break;
    }
  }
  if(c==1)
    printf("FOUND!!!The index is %d.",index);
  else
    printf("nOT fOUND !!!!!");
}
void main()
{
  int size=0,ele=0;
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
  printf("Enter the element to be searched:");
  scanf("%d",&ele);
  search(arr,size,ele);
}

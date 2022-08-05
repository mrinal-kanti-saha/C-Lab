#include<stdio.h>
int selectionsort(int a[],int size)
{ 
  int min=0,t=0;
  for(int i=0;i<size-1;i++)
  {
    min=i;
    for(int j=i;j<size;j++)
    {
      if(a[j]<a[min])
      {
        min=j;
      }
    }
    if(i!=min)
    {
      t=a[i];
      a[i]=a[min];
      a[min]=t;
    }
  }
}
void main()
{
  int sa=0;
  printf("Enter the size of array:");
  scanf("%d",&sa);
  int a[sa];
  for(int i=0;i<sa;i++)
    a[i]=0;
  printf("Enter the elements of array :");
  for(int i=0;i<sa;i++)
  {
    scanf("%d",&a[i]);
  }
  selectionsort(a,sa);
  printf("The SORTED ARRAY :-\n");
  for(int k=0;k<sa;k++)
    printf("%d ",a[k]);
}

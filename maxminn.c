#include<stdio.h>
int main()
{
  int a=0,n=0,max=0,min=0,i=1;
  printf("Enter no of numbers:");
  scanf("%d",&n);
  printf("Enter no:");
  scanf("%d",&a);
  max=a;
  min=a;
  while(i<n)
  {
    printf("Enter no:");
    scanf("%d",&a);
    if(a>max)
    {
      max=a;
    }
    if(a<min)
    {
      min=a;
    }
  i=i+1;
  }
  printf("Max:%d and Min:%d",max,min);
} 
 


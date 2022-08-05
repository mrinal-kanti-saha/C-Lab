#include<stdio.h>
int binarysearch(int a[],int size,int n)
{
  int l=0,h=0,m=0;
  h=size-1;
  while(l<=h)
  {
    m=(l+h)/2;
    if(n==a[m])
      return(m);
    if(n>a[m])
    {
      l=m+1;
    }
    else
    {
      h=m-1;
    }
  }
  return(-1);
}
int main()
{
  int size=0,n=0,x=0;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++)
    a[i]=0;
  printf("Enter the array:");
  for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
  printf("Enter the number you want to search for:");
  scanf("%d",&n);
  x=binarysearch(a,size,n);
  if(x==-1)
    printf("SORRY!!!The number is not present...");
  else
    printf("The number is present in the array.\nPosition = %d.\n",x+1);
}  

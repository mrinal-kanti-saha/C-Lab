#include<stdio.h>
int binarysearch(int a[],int l,int h,int n)
{
  int m=0;
  m=(l+h)/2;
  if(l>h)
    return(-1);
  if(n==a[m])
    return(m);
  if(n>a[m])
    return(binarysearch(a,m+1,h,n));
  if(n<a[m])
    return(binarysearch(a,l,m-1,n));
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
  x=binarysearch(a,0,size-1,n);
  if(x==-1)
    printf("SORRY!!!The number is not present...");
  else
    printf("The number is present in the array.\nPosition = %d.\n",x+1);
}  

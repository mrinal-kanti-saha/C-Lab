#include<stdio.h>
void duplicate(int n,int a[n])
{
  int flag=0,k=1,b[n];
  b[0]=a[0];
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
      b[k]=a[i];
      k++;
    }
    flag=0;
  }
  printf("\nTHE UNIQUE ARRAY :-\n");
  for(int i=0;i<k;i++)
  {
    a[i]=b[i];
    printf("%d ",a[i]);
  }
}
void main()
{
  int n=0;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    a[i]=0;
  printf("Enter the array:");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  duplicate(n,a);
}

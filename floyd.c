//to print floyd's triangle
#include<stdio.h>
int main()
{
  int i=1,j=1,n=0,k=1;
  printf("enter the no of lines:");
  scanf("%d",&n);
  while(i<=n)
  {
    j=1;
    while(j<=i)
    {
      printf("%d ",k);
      k=k+1;
      j=j+1;
    }
    printf("\n");
    i=i+1;
  }
}

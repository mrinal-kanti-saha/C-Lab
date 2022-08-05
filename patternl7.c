#include<stdio.h>
int main()
{
  int i=0,j=0,k=0,n=0,a=0,x=1;
  printf("Enter no of lines:");
  scanf("%d",&a);
  while(x<a)
  {
    n=n+2;
    x++;
  }
  while(i<a)
  {
    j=0;
    while(j<n)
    {
      printf(" ");
      j++;
    }
    printf("*");
    k=0;
    while(k<i*2)
    {
      printf("+*");
      k++;
    }
    printf("\n");
    n=n-2;
    i++;
  }
}

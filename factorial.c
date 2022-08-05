//to find factorial of n
#include<stdio.h>
int main()
{
  int n=0,fact=1,i=1;
  printf("enter the no:");
  scanf("%d",&n);
  if(n<0)
  { 
    printf("no not valid for factorial");
    return 0;
  } 
  else
  { 
    while(i<=n)
    {
      fact=fact*i;
      i=i+1;
    }
  }
  printf("The factorial of %d is %d.",n,fact);
}


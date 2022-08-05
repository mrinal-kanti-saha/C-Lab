#include<stdio.h>
int fact(int);
int main()
{
  int n=0,f=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  f=fact(n);
  printf("Factorial of %d is %d.\n",n,f);
  return 0;
}
int fact(int n)
{
  if(n==0)
    return 1;
  return(n*fact(n-1));
}


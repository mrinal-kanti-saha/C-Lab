#include<stdio.h>
int sumn(int);
int main()
{
  int n=0,s=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  s=sumn(n);
  printf("Sum upto %d is %d.\n",n,s);
  return 0;
}
int sumn(int n)
{
  if(n==1)
    return 1;
  return(n+sumn(n-1));
}


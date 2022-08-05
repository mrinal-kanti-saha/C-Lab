#include<stdio.h>
int power(int,int);
int main()
{
  int n=0,m=0,s=0;
  printf("Enter the value of n and m:");
  scanf("%d %d",&n,&m);
  s=power(n,m);
  printf("%d raised to %d is %d.\n",n,m,s);
  return 0;
}
int power(int n,int m)
{
  if(m==0)
    return 1;
  return(n*power(n,m-1));
}


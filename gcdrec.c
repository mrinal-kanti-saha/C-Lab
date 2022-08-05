#include<stdio.h>
int gcd(int,int);
int main()
{
  int n=0,m=0,g=0;
  printf("Enter the value of m and n:");
  scanf("%d %d",&m,&n);
  g=gcd(m,n);
  printf("GCD of %d and %d is %d.\n",m,n,g);
  return 0;
}
int gcd(int m,int n)
{
  if(n==0)
    return (m);
  if(n>m)
    return (gcd(n,m));
  return (gcd(n,m%n));
}

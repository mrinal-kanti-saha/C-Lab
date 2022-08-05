#include<stdio.h>
int main()
{
  int n=0,num=0,a=0,b=0;
  printf("Enter the value of n:");
  scanf("%d",&n);
  num=n;
  while(num>0)
  {
    a=num%10;
    b=b*10+a;
    num=num/10;
  }
  printf("Difference of %d and its reverse %d is %d.\n",n,num,n-num);
  return 0;
}



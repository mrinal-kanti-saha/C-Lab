//to find sum of digits
#include<stdio.h>
int main()
{
  int n=0,i=0,sum=0,num=0;
  printf("Enter the no:");
  scanf("%d",&n);
  num=n;
  while(n>0)
  {
    i=n%10;
    sum=sum+i;
    n=n/10;
  }
  printf("The sum of digits od %d is %d.",num,sum);
}

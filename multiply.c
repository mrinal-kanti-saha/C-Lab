//to multiply without using *
#include<stdio.h>
int main()
{
  int product=0,i=1,a=0,b=0;
  printf("Enter 2 nos to be multiplied:");
  scanf("%d %d",&a,&b);
  while(i<=b)
  {
    product=product+a;
    i=i+1;
  }
  printf("%d * %d = %d",a,b,product);
} 

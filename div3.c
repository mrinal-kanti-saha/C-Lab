#include<stdio.h>
int main()
{
  int n=0,i=0,sum=0,num=0;
  printf("Enter the no:");
  scanf("%d",&n);
  num=n;
  do
  {
    sum=0;
    while(n>0)
    {
      i=n%10;
      sum=sum+i;
      n=n/10;
    }
    n=sum;
  }while(sum>9);

  if(sum==9||sum==6||sum==3)
    printf("%d is divisible by 3.",num);
  else
    printf("%d is not divisible by 3.",num);
}


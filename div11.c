#include<stdio.h>
int main()
{
  int a=0,b=0,c=0,d=0,num=0,n=0;
  printf("Enter a no:");
  scanf("%d",&num);
  n=num;
  while(n>11)
  { 
    while(n>0)
    {
      a=n%10;
      b=b+a;
      n=n/10;
      c=n%10;
      d=d+c;
      n=n/10;
    }
    n=b-d;
    b=d=0;
    if(n<0)
    {
      n=n*-1;
    }
  }

  if((n==0)||(n==11))
    printf("%d is divisible by 11!!!",num);
  else
    printf("%d is not divisible by 11!!!",num);
}

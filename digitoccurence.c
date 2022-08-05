//to find occurence of a digit in the given number
#include<stdio.h>
int main()
{
  int n=0,d=0,a=0,c=0,num=0;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter the digit who occurence is to be calculated:");
  scanf("%d",&d);
  num=n;
  if(n==0&&d==0)
  {
    printf("0 occurs 1 time in 0.");
    return;
  }
  if(n<0)
  {
    n=n*-1;
  }
  while(n>0)
  {
    a=n%10;
    if(a==d)
    {
      c=c+1;
    }
    n=n/10;
  }
  printf("%d occurs %d times in %d.",d,c,num);
}

#include<stdio.h>
int main()
{
  long num=0,num1=0,e=1;char c,d;
  printf("Enter the expression:");
  scanf("%c",&c);
  if(c=='-')
  {
    e=-1;
    scanf("%c",&c);
  }
  while(c>='0'&&c<='9')
  {
    num=num*10+(c-48);
    scanf("%c",&c);
  }
  num=num*e;
  e=1;
  while(c!='\n')
  {
    d=c;
    scanf("%c",&c); 
    if(c=='-')
    {
      scanf("%c",&c);
      e=-1;
    }
    while(c>='0'&&c<='9')
    {
      num1=num1*10+(c-48);
      scanf("%c",&c);
    }
    num1=e*num1;
    e=1;
    switch(d)
    {
      case '+':
        num=num+num1;
        break;
      case '-':
        num=num-num1;
        break;
      case '*':
        num=num*num1;
        break;
      case '/':
        num=num/num1;     
        break;
      default:
        printf("invalid symbol.\nTERMINATED.");
        return 0;
    }
    num1=0;
  }
  printf("The value of the expression is=%ld\n",num);
}

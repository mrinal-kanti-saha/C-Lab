//to find remainder without using %
#include<stdio.h>
int main()
{
  int a=0,b=0,mod=0,i=0,q=0;
  printf("Enter 2 nos:");
  scanf("%d %d",&a,&b);
  q=a;
  while(q>=0)
  {  
    q=q-b;
    i++;
  }
  if(q<0)
    i--;
  mod=a-b*i;
  printf("the remainder is %d.",mod);
} 

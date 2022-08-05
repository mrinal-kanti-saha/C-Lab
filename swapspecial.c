//this prog is to swap 2 nos without using a third variable
#include<stdio.h>
int main() 
{
  int a=0,b=0;
  printf("Enter 2 nos:");
  scanf("%d %d",&a,&b);
  printf("a=%d and b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("a=%d and b=%d\n",a,b);
}

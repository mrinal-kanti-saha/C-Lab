#include<stdio.h>
int length(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++); 
  return(i);
}
void reverse(char a[])
{
  char t;
  for(int i=0;i<length(a)/2;i++)
  {
    t=a[i];
    a[i]=a[length(a)-1-i];
    a[length(a)-1-i]=t;
  }
  printf("The reversed string is %s",a);
}
void main()
{
  char a[50];
  printf("enter the string:");
  scanf("%49[^\n]",a);
  reverse(a);
}

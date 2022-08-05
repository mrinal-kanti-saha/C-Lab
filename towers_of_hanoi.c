#include<stdio.h>
void toh(int,char,char,char);
int main()
{
  int n=0;char s='s',a='a',d='d';
  printf("Enter the value of n:");
  scanf("%d",&n);
  toh(n,s,a,d);
}
void toh(int n,char s,char a,char d)
{
  static int i=1;
  if(n==1)
  {
    printf("%d.Move from %c to %c.\n",i,s,d);
    i++;
    return;
  }
  toh(n-1,s,d,a);
  toh(1,s,a,d);
  toh(n-1,a,s,d);  
}


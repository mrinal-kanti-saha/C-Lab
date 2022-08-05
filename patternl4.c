#include<stdio.h>
int main()
{
  int a=5,i=1,j=1;
  printf("Enter a no:");
  scanf("%d",&a);
  while(i<=a)
  {
    j=i;
    while(j>=1)
    {
      printf("%d %d\n",i,j);
      j--;
    }
    i++;
  }
}


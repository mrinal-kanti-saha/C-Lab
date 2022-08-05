#include<stdio.h>
int main()
{
  int a=5,i=0,j=0;
  printf("Enter no of lines:");
  scanf("%d",&a);
  while(i<a)
  {
    printf("*");
    j=0;
    while(j<i)
    {
      printf(" *");
      j++;
    }
    printf("\n");
    i++;
  }
}

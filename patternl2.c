#include<stdio.h>
int main()
{
  int a=5,b=5,i=1,j=0;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  while(i<=a)
  {
    j=b;
    while(j>=1)
    {
      printf("%d %d\n",i,j);
      j--;
    }
    i++;
  }
}
                                  

#include<stdio.h>
int main()
{ 
  int a,b,i=1,j=1;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  while(i<=a)
  {
    j=1; 
    while(j<=b)
    {
      printf("%d %d\n",i,j);
      j++;
    }
    i++;
  }
}

//to find whether no is prime composite or unique
#include<stdio.h>
int main()
{
  int i=2,c=0,n=0;
  printf("Enter the no:");
  scanf("%d",&n);
  if(n==1)
  {
    printf("%d is a unique number.",n);
  }
  else
  {
    while(i<=n/2)
    {
      if(n%i==0)
        c=c+1;
      i=i+1;
    }
    if(c==0)
    {
      printf("%d id a prime number.",n);
    }
    else 
    {
      printf("%d is a composite number.",n);
    }
  }
}
  
    

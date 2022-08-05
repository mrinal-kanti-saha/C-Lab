//to print pascal's triangle
#include<stdio.h>
int main()
{
  int i=0,j=0,k=1,n=0,l=1,m=1,q=0,p=1,d=1,t=0;
  printf("enter the no of lines:");
  scanf("%d",&n);
  while(i<n)
  {
    j=0;
    k=n-i-1;
    while(k>=1)
    {
      printf(" ");
      k--;
    }
    while(j<=i)
    {
      if(j==0)
        printf("1");
      else if(j==i)
        printf(" 1");
      else if(j==1)
        printf(" %d",i);
      else if(j==i-1)
        printf(" %d",i);
      else
      {
        p=1;q=i;l=1;t=j;
        if(j>i/2)
        {
          j=i-j;
        }
        while(l<=j)
        { 
          p=p*q;
          l++;
          q--;
        }
        d=1;m=1; 
        while(m<=j)
        {
          d=d*m;
          m++;
        }
        printf(" %d",p/d);
      }
      j=t;  
      j++;
    }
    i++;
    printf("\n");
  }
}       

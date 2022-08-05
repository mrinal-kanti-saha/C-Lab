#include<stdio.h>
int pascal(int c,long long a[][c])
{
  a[0][0]=1;
  a[1][0]=1;
  a[1][1]=1;
  for(int i=2;i<c;i++)
  {
    a[i][0]=1;
    a[i][i]=1;
    for(int j=1;j<i;j++)
    {  
      a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
  }
}
int main()
{
  int c=0;
  printf("Enter the no of lines:");
  scanf("%d",&c);
  long long a[c][c];
  for(int i=0;i<c;i++)
    for(int j=0;j<c;j++)
      a[i][j]=0;
  pascal(c,a);
  for(int i=0;i<c;i++)
  {
    for(int j=0;j<=i;j++)
    {
      printf("%lld ",a[i][j]);
    }
    printf("\n");
  }
}

#include<stdio.h>
int det(int n,int a[n][n])
{ 
  int x=0,y=0,d=0;
  if(n==1)
  {
    return(a[0][0]);
  }
  else if(n==2)
  {
    d=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    return(d);
  }
  else
  {
    int b[n-1][n-1];
    for(int j=0;j<n;j++)
    { 
      x=0;
      for(int k=1;k<n;k++)
      {
        y=0;
        for(int l=0;l<n;l++)
        {
          if(l==j)
          {
            continue;
          }
          b[x][y]=a[k][l];
          y++;
        }
        x++;
      }    
      if(j%2==0)
      {  
        d=d+a[0][j]*det(n-1,b);
      }
      else
      {
        d=d-a[0][j]*det(n-1,b);
      }
    }
    return(d);
  }
}
int main()
{ 
  int n=0,d=0;
  printf("Enter the dimensions of matrix:");
  scanf("%d",&n);
  int a[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      a[i][j]=0;
    }
  }
  printf("Enter the matrix:-\n");
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  } 
  d=det(n,a);
  printf("Determinant of the given matrix is : %d\n",d);
}

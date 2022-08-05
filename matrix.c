#include<stdio.h>
void add(int r1,int c1,int a[r1][c1],int b[r1][c1])
{ 
  int c[r1][c1];
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
void sub(int r1,int c1,int a[r1][c1],int b[r1][c1])
{
  int c[r1][c1];
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      c[i][j]=a[i][j]-b[i][j];
    }
  }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
void multiply(int r1,int c1,int a[r1][c1],int r2,int c2,int b[r2][c2])
{
  int c[r1][c2];
  for(int i=0;i<r1;i++) 
  {
    for(int j=0;j<c2;j++)
    { 
      c[i][j]=0;
      for(int k=0;k<c1;k++)
      {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      printf("%f ",c[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int c1=0,r1=0,c2=0,r2=0,ch=0;
  printf("Enter the dimensions of 1st array:");
  scanf("%d %d",&r1,&c1);
  int a[r1][c1];
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      a[i][j]=0;
    }
  }
  printf("Enter the array:-\n");
  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c1;j++)
    {
      scanf("%f",&a[i][j]);
    }
  }
  printf("Enter the dimensions of 2nd array:");
  scanf("%d %d",&r2,&c2);
  int b[r2][c2];
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      b[i][j]=0;
    }
  }
  printf("Enter the array:-\n");
  for(int i=0;i<r2;i++)
  {
    for(int j=0;j<c2;j++)
    {
      scanf("%f",&b[i][j]);
    }
  }
  printf("MENU:\n1: MATRIX Addition.\n2: MATRIX Substraction.\n3: MATRIX Multiplication.\nEnter the operation : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
      if(r1==r2&&c1==c2)
        add(r1,c1,a,b); 
      else
      {
        printf("NOT COMPATIBLE!!!");
        return 0;
      }
      break;
    case 2:
      if(r1==r2&&c1==c2)
        sub(r1,c1,a,b); 
      else
      {
        printf("NOT COMPATIBLE!!!");
        return 0;
      }
      break;
    case 3:
      if(c1==r2)
        multiply(r1,c1,a,r2,c2,b);
      else
      {
        printf("NOT COMPATIBLE!!!");
        return 0;
      }
  }
}

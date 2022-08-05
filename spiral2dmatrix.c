#include<stdio.h>
void spiral(int,char,char);
void main()
{
  int n=0;
  char sd,cd;
  printf("Enter the order of the square matrix (odd no only) : ");
  scanf("%d",&n);
  printf("Enter step direction (l= left, r= right, u= up, d= down) : ");
  scanf(" %c",&sd);
  printf("Enter circular direction (a= anticlockwise, c= clockwise) : ");
  scanf(" %c",&cd); 
  spiral(n,sd,cd);
}
void spiral(int n,char sd,char cd)
{
  if(n%2==0)
  {
    printf("TERMINATED...Should have entered odd number...");
    return;
  }
  int a[n][n],x=1,m=0,r=0,c=0,sum=0;
  r=c=m=n/2;
  for(int i=0;i<n;i++)
  {  
    for(int j=0;j<n;j++)
    {
      a[i][j]=0;
    }
  }
  a[r][c]=x;
  x=2;
  while(x<=n*n)
  {  
    if(a[r][c]!=0)
    {
      switch(sd)
      {
        case 'r':
          c++;
          if(x!=2)
            if(cd=='c')
              r--;
            else
              r++;
          break;
        case 'l':
          c--;
          if(x!=2)
            if(cd=='c')
              r++;
            else
              r--;
          break;
        case 'u':
          r--;
          if(x!=2)
            if(cd=='c')
              c--;
            else
              c++;
          break;
        case 'd':
          r++;
          if(x!=2)
            if(cd=='c')
              c++;
            else
              c--;
          break;
        default:
          printf("Wrong choice!!! TERMINATED...");
          return;
      }
      continue;
    }
    else
    {
       a[r][c]=x;
       x++;
    }   
    switch(cd)
    {   
      case 'c':
        if(sd=='r')
          r=r+1;
        else if(sd=='l')
          r=r-1;
        else if(sd=='u')
          c=c+1;
        else if(sd=='d')
          c=c-1;
        if(r==c)
        {
          if(r>m)
            sd='d';
          else
            sd='u';
        }
   	else if(r+c==n-1)
    	{
     	  if(r>c)
            sd='l';
          else
            sd='r';
        }
        break;
      case 'a':
        if(sd=='r')
          r--;
        else if(sd=='l')
          r++;
        else if(sd=='u')
          c--;
        else if(sd=='d')
          c++;
        if(r==c)
        {
          if(r>m)
            sd='r';
          else
            sd='l';
        }
        else if(r+c==n-1)
        {
          if(r>c)
            sd='d';
          else
            sd='u';
        }
        break;
      default:
        printf("Wrong choice!!! TERMINATED...");
        return; 
    }
  }
  for(int i=0;i<n;i++)
  {  
    for(int j=0;j<n;j++)
    {
      if(a[i][j]<10)
        printf("%d  ",a[i][j]);
      else
        printf("%d ",a[i][j]);
      if((i==j)||(i+j==n-1))
        sum=sum+a[i][j];
    }
    printf("\n");
  }
  printf("The 2D SPIRAL sum is %d.",sum);
}  

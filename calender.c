#include<stdio.h>
int main()
{
  int m=0,y=0,d=0,s=0,a=0,i=1,j=0,k=0,p=1,yr=0,x=1;
  printf("Enter month and year:");
  scanf("%d %d",&m,&y);
  yr=y-1;
  d=365*yr;
  if(y<1753)
  {
    d=d+yr/4;
  }
  else
  {
    d=d+yr/4-yr/100+yr/400+13-11;
  }  
  if(m>2)
  {
    if(y>=1800)
    {
      if((y%400==0)||((y%4==0)&&!(y%100==0)))
      {
        d=d+1;
      }
    }
    else
    {  
      if(y%4==0)
      {
        d=d+1;
      }
    }
  }    
  switch(m)
  {
    case 12:
      a=31;
      if(y==1752)
      {
        d=d+30+31+19+31+31+30+31+30+31+28+31;
      }
      else
      {
        d=d+30+31+30+31+31+30+31+30+31+28+31;
      }
      printf("      December %d",y);
      break;
    case 11:
      a=30;
      if(y==1752)
      {
        d=d+31+19+31+31+30+31+30+31+28+31;
      }
      else
      {
        d=d+31+30+31+31+30+31+30+31+28+31;
      }
      printf("      November %d",y);
      break;
    case 10:
      a=31;
      if(y==1752)
      {
        d=d+19+31+31+30+31+30+31+28+31;
      }
      else
      {
        d=d+30+31+31+30+31+30+31+28+31;
      }
      printf("      October %d",y);
      break;
    case 9:
      a=30;
      d=d+31+31+30+31+30+31+28+31;
      printf("      September %d",y);
      break;
    case 8:
      a=31;
      d=d+31+30+31+30+31+28+31;
      printf("      August %d",y);
      break;
    case 7:
      a=31;
      d=d+30+31+30+31+28+31;
      printf("      July %d",y);
      break;
    case 6:
      a=30;
      d=d+31+30+31+28+31;
      printf("      June %d",y);
      break;
    case 5:
      a=31;
      d=d+30+31+28+31;
      printf("      May %d",y);
      break;
    case 4:
      a=30;
      d=d+31+28+31;
      printf("      April %d",y);
      break;
    case 3:
      a=31;
      d=d+28+31;
      printf("      March %d",y);
      break;
    case 2:
      a=28;
      d=d+31;
      if(y>=1800)
      {
        if((y%400==0)||((y%4==0)&&!(y%100==0)))
        {
          a=a+1;
        }
      }
      else
      {  
        if(y%4==0)
        {
          a=a+1;
        }
      }      
      printf("      February %d",y);
      break;
    case 1:
      a=31;
      d=d+0;
      printf("      January %d",y);
      break;
    default:
      printf("INVALID MONTH!!! TERMINATED...\n");
      return 0;
  }
  s=d%7;
  printf("\nSu Mo Tu We Th Fr Sa\n");
  if(s>0)
  {
    p=7-s+1;
  }
  i=1;
  if(y==1752&&m==9)
  {
    printf("       1  2 14 15 16\n");
    for(k=17;k<=30;k++)
    {
      if(k==24)
        printf("\n");
      printf("%d ",k);
    }
    printf("\n\n");
  }
  else
  {
    while(x<=6)
    {
      for(j=p;j<=6;j++)
        printf("   ");
      if(i>a)
      {
        break;
      }
      else
      {
        for(k=1;k<=p;k++)
        {
          if(i<=9)
            printf(" %d ",i);
          else
            printf("%d ",i);
          i++;
          if(i>a)
          {
            break;
          }
        }
      }   
      printf("\n");
      p=7; 
      x=x+1;
    }
  }
}

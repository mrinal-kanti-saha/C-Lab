#include<stdio.h>
void ones(int);
void tens(int);
void para(int);
void main()
{
  long n,c;
  printf("Enter a number less than 1,00,00,000: ");
  scanf("%ld",&n);
  if(n==0)
    printf("Zero");
  else
  {
    c=n/10000000;
    if(c>0)
    {
      ones(c);
      printf("Crore ");
      n=n%10000000;
    }
    c=n/100000;
    if(c>0)
    {
      ones(c);
      printf("Lakh ");
      n=n%100000;
    }
    c=n/1000;
    if(c>0)
    {
      ones(c);
      printf("Thousand ");
      n=n%1000;
    } 
    c=n/100;
    if(c>0)
    {
      para(c);
      printf("Hundred ");
      n=n%100;
    } 
    c=n;
    if(c>0)
    {
      ones(c);
    }
  }  
  printf("\n");
}
void ones(int a)
{
  int x,y;
  x=a/10;
  y=a%10;
  if(x==0)
  {
    para(y);
  }
  switch(x)
  {
    case 1:
      tens(y);
      break;
    case 2:
      printf("Twenty ");
      para(y);
      break;
    case 3:
      printf("Thirty ");
      para(y);
      break;
    case 4:
      printf("Forty ");
      para(y);
      break;
    case 5:
      printf("Fifty ");
      para(y);
      break;
    case 6:
      printf("Sixty ");
      para(y);
      break;
    case 7:
      printf("Seventy ");
      para(y);
      break;
    case 8:
      printf("Eighty ");
      para(y);
      break;
    case 9:
      printf("Ninety ");
      para(y);
  }
}
void para(int a)
{
  switch(a)
  {
    case 1:
      printf("One ");
      break;
    case 2:
      printf("Two ");
      break;
    case 3:
      printf("Three ");
      break;
    case 4:
      printf("Four ");
      break;
    case 5:
      printf("Five ");
      break;
    case 6:
      printf("Six ");
      break;
    case 7:
      printf("Seven ");
      break;
    case 8:
      printf("Eight ");
      break;
    case 9:
      printf("Nine ");
  }
}
void tens(int a)
{
  switch(a)
  {
    case 0:
      printf("Ten ");
      break;
    case 1:
      printf("Eleven ");
      break;
    case 2:
      printf("Twelve ");
      break;
    case 3:
      printf("Thirteen ");
      break;
    case 4:
      printf("Fourteen ");
      break;
    case 5:
      printf("Fifteen ");
      break;
    case 6:
      printf("Sixteen ");
      break;
    case 7:
      printf("Seventeen ");
      break;
    case 8:
      printf("Eighteen ");
      break;
    case 9:
      printf("Nineteen ");
      break;
  }
}

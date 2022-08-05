#include<stdio.h>
int length(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++); 
  return(i);
}
void apitaph(char a[])
{
  int n=0;
  for(int i=0;i<length(a);i++)
  {
    if(a[i]>='A'&&a[i]<='Z')
    {
      if(a[i]<='M')
      {
        n=77-a[i]+1;
        a[i]=77+n;
      }
      else
      {
        n=a[i]-77-1;
        a[i]=77-n;
      }
    }
    if(a[i]>='a'&&a[i]<='z')
    {
      if(a[i]<='m')
      {
        n=109-a[i]+1;
        a[i]=109+n;
      }
      else
      {
        n=a[i]-109-1;
        a[i]=109-n;
      }
    }
    if(a[i]>='0'&&a[i]<='9')
    {
      if(a[i]<='4')
      {
        n=52-a[i]+1;
        a[i]=52+n;
      }
      else
      {
        n=a[i]-52-1;
        a[i]=52-n;
      }
    }
  }
}
void crypt(char a[],int rf)
{
  for(int i=0;i<length(a);i++)
  {
    if(i!=length(a)/2)
    {
      if(a[i]>='a'&&a[i]<='z')
      {
        a[i]=a[i]+rf;
        if(a[i]>122)
        {
          a[i]=97+a[i]-122-1;
        }
      }
      if(a[i]>='A'&&a[i]<='Z')
      {
        a[i]=a[i]+rf;
        if(a[i]>90)
        {
          a[i]=65+a[i]-90-1;
        }
      }
    }
  }
}        
void main()
{
  char a[50];
  int n,rf;
  printf("Enter the string :");
  scanf("%49[^\n]",a);
  printf("Enter 1 for encryption, 2 for decryption :");
  scanf("%d",&n);
  rf=length(a)/2;
  switch(n)
  {
    case 1:
      apitaph(a);
      crypt(a,rf);
      printf("The code = %s\n",a);
    break;
    case 2:
      crypt(a,-rf)
      apitaph(a);
      printf("The code = %s\n",a);
    break;
    default:
      printf("TerminATED...");
      return;
  }
}

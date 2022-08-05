#include<stdio.h>
int length(char a[])
{
  int i;
  for(i=0;a[i]!='\0';i++); 
  return(i);
}
void substring(char a[],char b[],int s,int n)
{
  int i=s,k=0;
  while(i<=n&&a[i]!='\0')
  {
    b[k]=a[i];
    k++;
    i++;
  }
  b[k]='\0';
}
void justify(char a[],int lw,int end)
{
  char b[100]={};
  int nb=0,es=0,extra=0,ns=0,sps=0;
  nb=lw-end;
  for(int i=0;i<end;i++)
  {
    if(a[i]==' ')
      es++;
  }
  if(es=0)
  {
    substring(a,b,0,end-1);
    printf("%s\n",b);
  }
  else
  {
    ns=nb/es;
    extra=nb%es;
    for(int i=0;i<end-1;i++)
    {
      if(a[i]!=' ')
      {
        printf("%s\n",a);
      }
      else
      {
        if(extra>0)
          sps=1;
        else
          sps=0;
        for(int i=1;i<=ns+sps;i++)
        {
          printf(" ");
        }
        extra--;
      }
    }
    printf("\n");
  }    
}
void main()
{
  char a[100],b[100];int lw=0,end;
  printf("Enter the string :");
  scanf("%99[^\n]",a);
  printf("Enter line width :");
  scanf("%d",&lw);
  end=lw;
  while(length(a)>lw)
  {
    if(a[lw-1]!=' '&&a[lw]==' ')
    {
      substring(a,b,0,lw-1);
      printf("%s\n",b);
      for(int j=0;j<length(b);j++)
      {
        b[j]='\0';
      }
    } 
    else
    {
      if(a[lw-1]==' ')
      {
        end--;
      }
      else
      { 
        for(int i=0;a[i]!=' ';i++)
        {
          end--;
        }
        end--;
        justify(a,lw,end);
        substring(a,a,end+2,length(a)-1);
      }
    }
  }
}

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
  /*for(int j=0;j<length(b);j++)
  {
    b[j]='\0';
  }*/
  while(i<=n&&a[i]!='\0')
  {
    b[k]=a[i];
    k++;
    i++;
  }
  b[k]='\0';
  printf("%s\n",b);
}
void main()
{
  char a[50],b[50];
  printf("enter the string:");
  scanf("%49[^\n]",a);
  substring(a,a,4,10);
  printf("the length of substring= %d",length(b));
}

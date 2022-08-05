#include<stdio.h>
void togglecase(char arr[],char brr[])
{
  for(int i=0;arr[i]!='\0';i++)
  {
    if(arr[i]>=65&&arr[i]<=90)
    {
      brr[i]=97+arr[i]-65;
    }
    if(arr[i]>=97&&arr[i]<=122)
    {
      brr[i]=65+arr[i]-97;
    }
  }
}
void main()
{
  char arr[10]="mRiNaL";
  char brr[10];
  togglecase(arr,brr);
  printf("%s",brr);
}

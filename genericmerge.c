#include<stdio.h>
void genericmerge(int a[],int lba,int sa,int b[],int lbb,int sb,int c[],int lbc)
{
  int uba=lba+sa-1,ubb=lbb+sb-1;
  while(lba<=uba && lbb<=ubb)
  {
    if(a[lba]<b[lbb])
    {
      c[lbc]=a[lba];
      lba++;
    }
    else
    {
      c[lbc]=b[lbb];
      lbb++;
    }
   lbc++;
  }
  for(int x=lba;x<sa;x++)
  {
    c[lbc]=a[x];
    lbc++;
  }
  for(int y=lbb;y<sb;y++)
  {
    c[lbc]=b[y];
    lbc++;
  }
}
void main()
{
  int sa=0,sb=0;
  printf("Enter the size of 1st array:");
  scanf("%d",&sa);
  printf("Enter the size of 2nd array:");
  scanf("%d",&sb);
  int a[sa],b[sb],c[sa+sb];
  for(int i=0;i<sa;i++)
    a[i]=0;
  for(int j=0;j<sb;j++)
    b[j]=0;
  for(int k=0;k<sa+sb;k++)
    c[k]=0;
  printf("Enter the elements of array 1:");
  for(int i=0;i<sa;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the elements of array 2:");
  for(int j=0;j<sb;j++)
  {
    scanf("%d",&b[j]);
  }
  genericmerge(a,0,sa,b,0,sb,c,0);
  printf("The MERGED ARRAY :-\n");
  for(int k=0;k<sa+sb;k++)
    printf("%d ",c[k]);
}

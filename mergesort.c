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
  for(int x=lba;x<=uba;x++)
  {
    c[lbc]=a[x];
    lbc++;
  }
  for(int y=lbb;y<=ubb;y++)
  {
    c[lbc]=b[y];
    lbc++;
  }

}
void mergesort(int arr[],int n)
{
  int t[n];
  for(int i=0;i<n;i++)
    t[i]=0;
  int size=1;
  for(int size=1;size<n;size=size*2)
  { 

    for(int lba=0;lba<n;lba=lba+(size*2))
    {
      genericmerge(arr,lba,size,arr,lba+size,size,t,lba);
    }
    for(int j=0;j<n;j++)
      arr[j]=t[j];
    
  }
}
void main()
{       
  int sa=0,sb=0;
  printf("Enter the size of array:");
  scanf("%d",&sa); 
  int a[sa];
  for(int i=0;i<sa;i++)
    a[i]=0;
  printf("Enter the elements of array :");
  for(int i=0;i<sa;i++)
  {
    scanf("%d",&a[i]);
  }
  mergesort(a,sa);
  printf("The SORTED ARRAY :-\n");
  for(int k=0;k<sa;k++)
    printf("%d ",a[k]);
}

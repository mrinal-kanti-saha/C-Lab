#include<stdio.h>
int fact(int n)
{
  if(n==0)
    return 1;
  return(n*fact(n-1));
}
void lexcorp(int a[],int num[],int len,int n,int x)
{
  int per=0,no=0,quo=0,length=len;
  if(len<=0)
  {
    return;
  }
  per=fact(len);
  no=per/len;
  quo=n/no;
  num[x]=a[quo];
  x++;
  len--;
  n=n-quo*no;
  for(int i=quo;i<length-1;i++)
  {
    a[i]=a[i+1];
  }
  lexcorp(a,num,len,n,x);
}
void main()
{
  int d=0,n=0,n1=0,n2=0,k=0,x=0,len=0,p=0,length=0;
  printf("Enter the last of digits : ");
  scanf("%d",&d);
  if(d==0)
  {
    printf("The total no of permutation is 1\n");
    printf("The only no in the series is 0\n");
    return;
  }
  len=length=d+1;  
  p=fact(len);
  printf("The total no of permutations are %d.\n",p);
  int a[len],num[len];
  for(int i=0;i<len;i++)
  {
    a[i]=i;
  }
  printf("Enter the value of wanted index in the lexicographic series : ");
  scanf("%d",&n);
  n1=n;
  n--;
  lexcorp(a,num,len,n,x);
  for(int i=0;i<length;i++)
  {
    n2=n2*10+num[i];
  }
  printf("The number at %d position is %d.\n",n1,n2);
  printf("Enter no to check for divisibility : ");
  scanf("%d",&k);
  if(n2%k==0)
  {
    printf("The number %d is divisible by %d.\n",n2,k);
  }
  else
  {
    printf("The number %d is not divisible by %d.\n",n2,k);
  }
}

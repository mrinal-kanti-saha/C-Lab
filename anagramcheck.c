#include<stdio.h>
void anagram(char a[],char b[])
{
  int c=1,alpha1[26],alpha2[26];
  for(int i=0;i<26;i++)
  {
    alpha1[i]=0;
    alpha2[i]=0;
  }
  for(int i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a'&&a[i]<='z')
    {
      alpha1[a[i]%97]++;
    }
    if(a[i]>='A'&&a[i]<='Z')
    {
      alpha1[a[i]%65]++;
    }
  }
  for(int i=0;b[i]!='\0';i++)
  {
    if(b[i]>='a'&&b[i]<='z')
    {
      alpha2[b[i]%97]++;
    }
    if(b[i]>='A'&&b[i]<='Z')
    {
      alpha2[b[i]%65]++;
    }
  }
  for(int i=0;i<26;i++)
  {
    if(alpha1[i]!=alpha2[i])
    {
      c=0;
      break;
    }
  }
  if(c==1)
  {
    printf("The Input words are ANAGRAMS!!!\n%s\n%s\n",a,b);
  }
  else
  {
    printf("SORRY!!! The input words are not anagrams...\n");
  }
}
void main()
{
  char w1[50],w2[50];
  printf("ANAGRAM CHECK\n");
  printf("Enter 1st word : ");
  scanf(" %49[^\n]",w1);
  printf("Enter 2nd word : ");
  scanf(" %49[^\n]",w2);
  anagram(w1,w2);
}

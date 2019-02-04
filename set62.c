#include<stdio.h>
void main()
{
 char a[30];
 int i,c=0,c1=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  c1++;
  if(a[i]==0 && a[i]==1)
  {
  c++;
  }
 }
 if(c==c1)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
 }

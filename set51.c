#include<stdio.h>
void main()
{
 int n,r,a[10],i=0,c=0;
 scanf("%d",&n);
 while(n>=0)
 {
  r=n%10;
  a[i]=r;
  i++;
  c++;
  n=n/10;
 }
 a[i]='\0';
 for(i=c;i>=0;i--)
 {
  printf("%d",a[i]);
 }
 }

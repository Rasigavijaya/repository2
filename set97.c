#include<stdio.h>
void main()
{
 int n,r,t=0;
 scanf("%d",&n);
 while(n>=0)
 {
  r=n%10;
  t=t*10+r;
  n=n/10;
 }
 printf("%d",t);
 }

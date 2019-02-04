#include<stdio.h>
void main()
{ 
 int n,sum=0,r;
 scanf("%d",&n);
 while(n>0)
 {
  r=n%10;
  sum=sum+r;
  n=n/10;
 }
 printf("5d",sum);
 }

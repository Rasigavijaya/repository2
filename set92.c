#include<stdio.h>
void main()
{
 int a[50],i,x=0,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  x=x+a[i];
 }
 printf("%d",x);
 }

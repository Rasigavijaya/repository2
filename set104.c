#include<stdio.h>
void main()
{
 int n,k,l=1;
 scanf("%d%d",&n,&k);
 while(k>0)
 {
  l=l*n;
  k--;
 }
 printf("%d",l);
}

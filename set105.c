#include<stdio.h>
void main()
{
 int n,n1,i,c=0,t=1,r;
 scanf("%d%d",&n,&n1);
 while(n>=0)
 {
  r=n%10;
  c++;
  n=n/10;
  t=t*10;
 }
 n=n*t;
 i=n*n1;
 printf("%d",i);
}

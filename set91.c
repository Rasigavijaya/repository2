#include<stdio.h>
void main()
{
 int l,p,m,vol,ar;
 scanf("%d%d%d",&l,&p,&m);
 vol=l*p*m;
 ar=2*(l*p)+(p*m)+(m*l);
 printf("volume=%d\t",vol);
 printf("area=%d",ar);
 }

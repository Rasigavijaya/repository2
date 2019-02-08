#include<stdio.h>
void main()
{
 int p,r,t,n,res;
 scanf("%d%d%d",&p,&r,&t);
 n=(p*r*t)/100;
 res=floor(n);
 printf("%d",res);
}

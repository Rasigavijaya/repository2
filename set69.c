#include<stdio.h>
void main()
{
 int n,m x;
 scanf("%d%d",&n,&m);
 if(n<m)
 {
  x=m-n;
 }
 else
 {
  x=n-m;
 }
 if(x%2==0)
 {
  printf("even");
 }
 else
 {
  printf("odd");
 }
}

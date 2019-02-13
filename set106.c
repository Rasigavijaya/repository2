#include<stdio.h>
void main()
{
 int a[50],i,n,n1;
 scanf("%d%d",&n,&n1);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<=n1;i++)
 {
  printf("%d",a[i]);
 }
}

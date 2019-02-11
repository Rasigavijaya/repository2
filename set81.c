#include<stdio.h>
void main()
{
 int a[50],b[50],c[50],i,n,j=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d%d",&a[i],&b[i]);
 }
 for(i=0;i<n;i++)
 {
  c[j]=a[i]-b[i];
  j++;
 }
for(i=0;i<n;i++)
{
 printf("%d\n",c[i]);
}
}

#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,j=0,n,c=0;
 gets(a);
 scanf("%d",&n);
 for(i=0;a[i]!='\0';i++)
 {
  c++;
 }
 for(i=c;i>=0;i-)
 {
  b[j]=a[i];
  j++;
 }
 for(i=0;i<n;i++)
 {
  printf("%c",b[i]);
 }
}
  
  

#include<stdio.h>
void main()
{
 char a[50],b[50];
 int i,c=0,j=0,c1=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  c++:
 }
 for(i=c;i>=0;i--)
 {
  b[j]=a[i];
  j++;
 }
 b[j]='\0';
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==b[i])
  {
   c1++;
  }
 }
 if(c==c1)
 {
  printf("yes");
 }
 else
 {
  printf("no");
 }
}

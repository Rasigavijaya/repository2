#include<stdio.h>
void main()
{
 char a[50],b[50],c[50];
 int i,j=0,k=0;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(i%2==0)
  {
   b[j]=a[i];
   j++;
  }
  else
  { 
   c[k]=a[i];
   k++;
  }
 }
 printf("even= %s",b);
 printf("odd=%s",c);
}

#include<stdio.h>
void main()
{
 char a[50];
 int c=0,i,x;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  c++;
 }
 x=c/2;
 if(c%2==0)
 {
  a[x]="*";
  a[x+1]="*";
 }
 else
 {
  a[x+1]="*";
 }
 printf("%s",a);
}

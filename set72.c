#include<stdio.h>
void main()
{
 char a[50];
 int i;
 gets(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]=='A' ||a[i]=='a'||a[i]=='E'||a[i]=='e'||a[i]=='I'||a[i]=='i'||a[i]=='O'||a[i]=='o'||a[i]=='U'||a[i]=='u')
  {
   printf("yes");
  }
  else
  {
   printf("no");
  }
 }
}

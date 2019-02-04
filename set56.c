#incude<stdio.h>
void main()
{
 char a[50];
 int i;
 gets(a);
 for(i=0;i!='\0';i++)
 {
  if(a[i]<='A' && a[i]>='z' && a[i]<48 && a[i]>=57)
  {
   printf("yes");
  }
  else
  {
   printf("no");
  }
 }
}

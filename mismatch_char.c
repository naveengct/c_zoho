#include<stdio.h>
void main()
{
   char a[20]={'a','b','c','d','e','f','g','h','i'},b[20]={'a','b','d','e','e','g','g','i','i'};
   int j;
   for(int i=0;a[i]!='\0';i++)
   if(a[i]!=b[i])
   {
       for( j=i;a[j]!=b[j] && a[j]!='\0';j++)
       printf("%c",a[j]);
       printf(",");
       for(;i<j;i++)
       printf("%c",b[i]);
       printf(",");
   }
}
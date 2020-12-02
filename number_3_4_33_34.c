#include<stdio.h>
void main()
{
    int a[100],k=0,j=0,i;
    for(i=0;i<10;i++){
        a[j++]=10*k+3;
        a[j++]=10*k+4;
        k=a[i];
    }
    for(i=0;i<10;i++)
      printf(" %d",a[i]);
}
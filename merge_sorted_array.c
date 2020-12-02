#include<stdio.h>
void main()
{
    int a[]={1,2,4},b[]={2,3,6,9},c[10];
    int i=0,j=0,k=0,m,n;
    m=sizeof(a)/sizeof(a[0]);
    n=sizeof(b)/sizeof(b[0]);
    while (i!=m && j!=n)
    {
       if (a[i]==b[j])
       {
           c[k++]=b[j++];
           i++;
       }
       else if(a[i]>b[j])
       c[k++]=b[j++];
       else
       c[k++]=a[i++];
    }
    while(m!=i)
    c[k++]=a[i++];
    while(n!=j)
    c[k++]=b[j++];
    for(i=0;i<k;i++)
    printf("%d",c[i]);
 
}
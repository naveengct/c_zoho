#include<stdio.h>
void main()
{
    int a[10]={2,3,7,1,8,5,11};
    int b[10],t,j,i;
    for( i=0;i<7;i++)
    b[i]=a[i];
    for( i=0;i<6;i++)
    for( j=i+1;j<7;j++)
    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for(i=0;i<7;i++)
    {
        for(j=0;j<7;j++)
        if(b[i]==a[j])
        break;
        if (j!=6)
        printf("%d>%d ",b[i],a[j+1]);
        else
        printf("%d<",b[i]);
    }
    
}
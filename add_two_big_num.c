#include<stdio.h>
void main()
{
    int a[15]={9,2,8,1,3,5,6,7,3,1,1,6},m=12;
    int b[15]={7,8,4,6,2,1,9,9,7},n=9,i,t=m-n,r=0,temp;
    for(i=n-1;i>-1;i--){
    temp=(a[i+t]+b[i]+r)%10;
    r=(a[i+t]+b[i]+r)/10;
    a[i+t]=temp;
    }
    for(i=0;i<m;i++)
    printf("%d ",a[i]);
}
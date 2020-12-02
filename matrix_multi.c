#include<stdio.h>
void main()
{
    int a[10][10]={
        {1,2},
        {4,5},
        {7,8}};
    int b[10][10]={
        {1},
        {4}};
    int c[10][10],j,i,k,m=3,n=2,m1=2,n1=1,t=0;
    for(i=0;i<m;i++){
        for(j=0;j<n1;j++){
            t=0;
            for(k=0;k<n;k++)
                t+=a[i][k]*b[k][j];
            c[i][j]=t;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n1;j++)
        printf(" %d",c[i][j]);
        printf("\n");
    }
}
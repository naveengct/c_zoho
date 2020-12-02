#include<stdio.h>
void main()
{
    int n=5,m=5,i,j,t;
    int a[10][10]={{1,2,3,4,17},
               {5,6,7,8,18},
               {9,10,11,12,19},
               {13,14,15,16,20},
               {21,22,23,24,25}};
    for(i=0;i<n/2;i++)
    for(j=i;j<n-i-1;j++)
    {
     t=a[i][j];
     a[i][j]=a[n-j-1][i];
     a[n-j-1][i]=a[n-i-1][n-j-1];
     a[n-i-1][n-j-1]=a[j][n-i-1];
     a[j][n-i-1]=t;
    }
     for(i=0;i<n;i++){
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
     }
}
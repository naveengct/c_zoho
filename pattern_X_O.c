#include<stdio.h>
void main()
{
    int i,j,m,m1=9,n,n1=6,x=0,y=0;
    char a[10][10];
    char c;
    m=m1;
    n=n1;
    while(n>x && m>y){
         if((x+1)%2==0)
         c='O';
         else
         c='X';
         for(i=x;i<n;i++)
         a[x][i]=c;
         x++;
        for(i=x;i<m;i++)
         a[i][n-1]=c;
         n--;
        if(x<n){
        for(i=n-1;i>=y;i--)
         a[m-1][i]=c;
         m--;
        }
        if(y<m){
         for(i=m-1;i>=x;i--)
         a[i][y]=c;
         y++;
        }
    }
    for(i=0;i<m1;i++){
      for(j=0;j<n1;j++)
         if (a[i][j])
         printf("%c ",a[i][j]);
         else
         printf("  ");
    printf("\n");
    }
}
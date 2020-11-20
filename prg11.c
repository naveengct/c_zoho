#include<stdio.h>
int power(int n ,int m){
    int res=1;
    for(int i=0;i<m;i++)
     res+=n;
     return res;
}
void main()
{
    int k,j=2,i,t,n=0,m=2;
    for(i=0;i<m;i++)
    n+=2*i;
    char a[100][5]={"0","1"};
    for(i=0;i<10;i++){
        k=0;
        for(t=0;a[i][t]!='\0';t++)
         a[j][k++]=a[i][t];
         a[j][k++]='0';
         j++;
         k=0;
         for(t=0;a[i][t]!='\0';t++)
         a[j][k++]=a[i][t];
         a[j][k++]='1';
         j++;
    }
    for(i=0;i<=j;i++)
      printf(" %s",a[i]);
}
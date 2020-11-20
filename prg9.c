#include<stdio.h>
void main()
{
    char a[10]={'a','b','a','a','b','c','c','d','e','d'};
    int b[10]={0},i,j;
    for(i=0;i<10;i++)
    {
        if(a[i]==a[i+1])
        continue;
        else{
            b[a[i]-97]+=1;
        }
    }
    for(i=0;i<9;i++)
    if(b[i])
    printf("%c-%d\n",97+i,b[i]);
}
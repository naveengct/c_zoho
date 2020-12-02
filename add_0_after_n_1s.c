#include<stdio.h>
void main()
{
    int a[15]={1,0,1,1,0,1,1,0,1,1,1,1},b[20],n=12,t=0,k=4,l=1,i;
    for(i=0;i<n-1;i++){
          b[t++]=a[i];
        if(l==k){
        b[t++]=0;
        l=1;
        }
        else if(a[i]==a[i+1])
        l++;
        else
        l=1;    
    } 
  b[t++]=a[i];
        if(l==k){
        b[t++]=0;
        l=1;
        }
 for(int i=0;i<t;i++)
 printf("%d ",b[i]);

}
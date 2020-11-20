#include<stdio.h>
void main()
{
    char a[20]="test1234hi",b[20]="hi";
    int i,j,t=0,n=0;
    for(i=0;a[i]!='\0';i++){
        t=0;
        n=0;
        for(j=0;b[j]!='\0';j++){
            t++;
            if(a[i+j]==b[j])
            n++;
            else
            break;
        }
        if(n==t){
            printf("%d\n",i);
            break;
        }
    }
}
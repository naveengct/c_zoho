#include<stdio.h>
void main()
{
    char a[10]="zohomail",b[20];
    int k=0,i;
    for(i=0;a[i]!='\0';i++)
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            b[k++]=a[i];
            a[i]='*';
        }
    for(i=0;a[i]!='\0';i++)
    if(a[i]=='*')
    a[i]=b[--k];
    for(i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
}
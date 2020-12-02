#include<stdio.h>
#include<string.h>
void main()
{
    char a[20][20][20];
    char t[20];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++){
            gets(t);
            strcpy(a[i][j],t);
            t[0]='\0';
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++)
        printf("%s",a[i][j]);
        printf("\n");
    }
}
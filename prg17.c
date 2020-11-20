#include<stdio.h>
#include<string.h>
int comp(char a[],char b[]){
    int i,j;
    for(i=0;a[i]!='\0';i++)
    if(a[i]!=b[i])
    return 0;
    return 1;
}
void main()
{
    char a[20][20][20]={{"luke","shaw"},
                        {"wayne","rooney"},
                        {"rooney","ronaldo"},
                        {"shaw","rooney"}};
    int i,j,k;
    char b[30],temp[20];
    gets(b);
    for(i=0;a[i][0][0]!='\0';i++)
        if(comp(a[i][1],b))
          strcpy(temp,a[i][0]);
    for(i=0;a[i][0][0]!='\0';i++)
    if(comp(a[i][1],temp))
    printf("%s\n",a[i][0]);
}
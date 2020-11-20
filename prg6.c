#include<stdio.h>
void main()
{
    char a[1000][5]={"a","b","c","d","e","f","g","h","i","j","k",
                         "l","m","n","o","p","q","r","s","t","u",
                         "v","x","w","y","z"
                        };
    int i,k=26,j,t,l;
    for(i=0;i<26;i++)
     for(j=0;j<26;j++)
         {   l=0;
            for(t=0;a[j][t]!='\0';t++)
            a[k][l++]=a[i][t];         
            for(t=0;a[j][t]!='\0';t++)
            a[k][l++]=a[j][t];
            k+=1;
         }
    printf("%d%s",k,a[677]);
}
#include<stdio.h>
#include<string.h>
void main(){
    char a[10][10]={"welco","metoz","ohoco","rpora","tion"},b[10]="eeh";
    int i,j,k,t;
    for(i=0;a[i][0]!='\0';i++)
    for(j=0;a[i][j]!='\0';j++)
    {
        t=0;
        for(k=0;b[k]!='\0';k++){
         if(a[i][j+k]==b[k])
         t++;
         else
         break;
        }
        if(t==strlen(b)){
        printf("%d %d\n",i+1,j+1);
        printf("%d %d\n",i+1,j+t);
        }
    }
    for(j=0;a[j][0]!='\0';j++)
    for(i=0;a[j][i]!='\0';i++)
    {
        t=0;
        for(k=0;b[k]!='\0';k++){
         if(a[i+k][j]==b[k])
         t++;
         else
         break;
        }
        if(t==strlen(b)){
        printf("%d %d\n",i+1,j+1);
        printf("%d %d\n",i+t,j+1);
        }
    }
}
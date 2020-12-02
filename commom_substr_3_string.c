#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50]="Every morning I want to I do expect",
    s2[50]="Every I morning want to play",s3[50]="Every I want to play",s4[50],s5[50];
    char res1[50];
    int i,j,k,r,t=0;
    for(;t!=2;t++){
    i=0,j=0,r=0;
    while(i<=strlen(s1)-1){
        for(k=0;s1[i]!=' ';k++,i++)
        s4[k]=s1[i];
        s4[k]='\0';
        i++;
        while(j<=strlen(s2)-1){
        for(k=0;s2[j]!=' ';k++,j++)
        s5[k]=s2[j];
        s5[k]='\0';
        j++;
        if(strlen(s5)==strlen(s4) &&  strlen(s4)!=0){
        for(k=0;s4[k]!='\0';k++)
        if(s4[k]!=s5[k])
        break;
        if(k==strlen(s4)){
        s1[i-k-1]='*';
        s2[j-k-1]='*';
        for(k=0;s4[k]!='\0';k++)
          res1[r++]=s4[k];
          res1[r++]=' ';
        }
        }
        }
        j=0;
          }
        r--;
        res1[r]='\0';
             
strcpy(s1,s3);
strcpy(s2,res1);
    }
     printf("%s\n",res1);
}
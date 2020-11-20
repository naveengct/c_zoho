#include<stdio.h>
void main()
{
    char s[20],c;
    int t=0,i,j;
    gets(s);
    c=s[0];
    for(i=0;s[i]!='\0';i++)
    {
        if(c!=s[i])
        for ( j = 0; j < t; j++)
         printf("%c",c);
        if(s[i]>47 && s[i]<58){
        t=t*10-48+(int)s[i];
        continue;
        }
        else
        c=s[i];
        t=0;
    }
    for ( j = 0; j < t; j++)
         printf("%c",c);
}
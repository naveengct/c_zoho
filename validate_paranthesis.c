#include<stdio.h>
#include<string.h>
char s[10],t=0;
int flag=0;
void push(int n){
    s[t++]=n;
    if (n=='(')
    flag++;
}
char pop()
{
    if(t==0)
    return -1;
    char temp;
    temp=s[--t];
   s[t]=' ';
   return temp;
}
void main()
{
   char a[20]="abc)de)()))))",b[20]="abc)de)()))))",temp;
   int cnt,k;
   for(int i=0;a[i]!='\0';i++)
   {
    
      if(a[i]==')'){
          cnt=1;
          while(1)
          {
            temp=pop();
            if (temp==-1 || flag==0)
            break;
            if(cnt==1)
            b[i]='*';
            for(k=i-1;k>=0;k--)
                if(b[k]==temp){
                b[k]='*';
                  if (temp=='(')
                   flag--;
                break;
                }
            cnt++;
            if(temp=='(')  
            break;
            
          }
      }
    else if((a[i]!='\0'))
      push(a[i]);
   }
   for(int i=0;b[i]!='\0';i++)
   if (b[i]=='*')
   printf("%c",a[i]);
   
}
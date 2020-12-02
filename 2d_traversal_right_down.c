#include<stdio.h>
#include<string.h>
void main()
{
    char s[20][20]={{'a','z','o','l'},
                    {'n','x','h','o'},
                    {'v','y','i','v'},
                    {'o','r','s','e'}};
    char a[20][20]={"van","zoho","love","are","is","ohi","xyse"};
    int i,j,k,l,n=4,t=0,c=0;
    for(i=0;a[i][0]!='\0';i++){
        l=0;
        for(j=0;a[j][0]!='\0';j++){
            for(k=0;s[j][k]!='\0';k++){
                   if(s[j][k]==a[i][l])
                   {
                       t=l+1;
                       c=1;
                       while(t!=strlen(a[i])-1){
                        if((j!=n-1)&&(s[j+1][k]==a[i][t] )){
                        j++;c++;}
                        if( (k!=n-1 && s[j][k+1] ==a[i][t])){
                        k++;c++;
                        }
                        t++;
                       }
                      if(c==strlen(a[i])-1) 
                      break;
                   }
            }
            if(c==strlen(a[i])-1) {
                printf("%s\n",a[i]);
                      break;   
            }         
        }
    }

}
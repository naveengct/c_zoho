#include<stdio.h>
int length(int a){
    int cnt=0;
    if (a==0)
      return 1;
    while(a){
        cnt++;
        a=a/10;
    }
    return cnt;
}
void main()
{
   char str[20][20]={"zero","one","two","three","four","five","six","seven",
                    "eight","nine"};
   char str2[20][20]={"","", "twenty", "thirty", "forty", "fifty",
                            "sixty", "seventy", "eighty", "ninety",
                            "ten", "eleven", "twelve", 
                               "thirteen", "fourteen",
                               "fifteen", "sixteen", 
                               "seventeen", "eighteen", "nineteen"};
   int num,len,temp,flag=1;
   scanf("%d",&num);
   if(num==0)
   printf("zero");
   len=length(num);
   if(len==3)
   printf("%s hundered ",str[num/100]);
   num=num%100;
   temp=num;
   if(num>20)
    temp=num/10;
   if(length(num)==2)
    printf("%s ",str2[temp]);
   if(!(num<20 && num>9))
    num=num%10;
   if (length(num)==1 && num!=0)
   printf("%s",str[num]);

}

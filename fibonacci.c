#include<stdio.h>
int main ()
{
    int n,count=0;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c=a+b;
    while(n>0)
    {
       printf("%d ",a);
       a=b;
       b=c;
       c=a+b;
       {
          count++;
           {
             if(count==n)
               break;
            }
           
       }
    }
}
#include<stdio.h>
int main ()
{
    int n,i,x,rev=0;
    scanf("%d",&n);
    while(n<0||n>0)
    {
       x=n%10;
       rev=rev*10+x;
       n=n/10;
    }
    printf("%d",rev);
}
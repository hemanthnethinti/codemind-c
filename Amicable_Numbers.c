#include<stdio.h>
int main ()
{
    int n,x,i,a=0,sum=0;
    scanf("%d%d",&n,&x);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a+=i;
        }
    }
    for(i=1;i<x;i++)
    if(x%i==0)
    {
        sum+=i;
    }
    if(a==x&&sum==n)
    printf("Amicable");
    else
    printf("Not Amicable");
}
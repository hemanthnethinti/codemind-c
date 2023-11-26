#include<stdio.h>
int main ()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    if(n%i==0)
    {
         sum+=i;
    }printf("%d",sum);
}
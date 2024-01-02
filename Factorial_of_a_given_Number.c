#include<stdio.h>
int main ()
{
    int n,i,r=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r*=i;
    }printf("%d",r);
}
#include<stdio.h>
int main ()
{
    int n,i,r,x,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=i*i;
        sum+=r;
        x=(n*(n+1))/2*(n*(n+1))/2;
    }
    printf("%d",x-sum);
}
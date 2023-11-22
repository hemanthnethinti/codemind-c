#include<stdio.h>
int main ()
{
    float n,i,t,sum=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        t=1/i;
        sum+=t;
    }
    printf("%.2f",sum);
}
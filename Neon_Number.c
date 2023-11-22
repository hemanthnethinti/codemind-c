#include<stdio.h>
int main()
{
    int n,r,x,sum=0;
    scanf("%d",&n);
    r=n*n;
    while(r>0)
    {
       x=r%10;
       sum+=x;
       r=r/10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}
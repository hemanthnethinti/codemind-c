#include<stdio.h>
int main ()
{
    int n,a,b;
    scanf("%d",&n);
    a=n%10;
    while(n>0)
    {
        b=n%10;
        n=n/10;
    }
    printf("%d",a+b);
}
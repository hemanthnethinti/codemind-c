#include<stdio.h>
int main ()
{
    int n,m;
    scanf("%d",&n);
    m=n%365;
    printf("%d
%d",n/365,m/7);
}
#include<stdio.h>
int main()
{
    int n,i=0,m,c=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        i+=m;
        c*=m;
        n=n/10;
    }
    printf("%d",c-i);
}
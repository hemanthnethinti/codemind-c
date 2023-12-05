#include<stdio.h>
int main ()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int a;
    for(i=1;i<=m;i++)
    {
        a=n*i;
        if(a%m==0)
        {
            printf("%d",(n*m)/a);
            break;
        }
    }
}
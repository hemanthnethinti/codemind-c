#include<stdio.h>
int main ()
{
    int n,i,b,e;
    scanf("%d",&n);
    b=n%10;
    while(n>0)
    {
       e=n%10;
       n=n/10;
    }
    if(b==e)
    printf("True");
    else
    printf("False");
}
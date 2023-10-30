#include<stdio.h>
int main()
{
    int i,n,d;
    scanf("%d%d",&n,&d);
    for(i = 1; i<=d; i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}
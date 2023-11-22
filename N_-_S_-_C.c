#include<stdio.h>
int main ()
{
    int n,i,x;
    scanf("%d%d",&n,&x);
    for(i=n+1;i<=x-1;i++)
    printf("%d %d %d
",i,i*i,i*i*i);
    
}
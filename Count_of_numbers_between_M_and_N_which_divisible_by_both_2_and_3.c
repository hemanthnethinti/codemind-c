#include<stdio.h>
int main ()
{
    int n,i,x,count=0;
    scanf("%d%d",&n,&x);
    for(i=n;i<=x;i++)
    {
        if(i%3==0&&i%2==0)
        {
            count++;
        }
    }
    printf("%d",count);
}
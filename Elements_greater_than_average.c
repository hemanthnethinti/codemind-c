#include<stdio.h>
int main ()
{
    int n,i,av=0,r,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        av+=ar[i];
    }r=av/n;
    for(i=0;i<n;i++)
    {
        if(ar[i]>=r)
        c++;
    }
    printf("%d",c);
}
    
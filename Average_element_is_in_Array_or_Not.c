#include<stdio.h>
int main ()
{
    int n,i,r,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        r+=ar[i];
    }int v=0;
    c=r/n;
    for(i=0;i<n;i++)
    {
        if(ar[i]==c)
        v++;
    }
    if(v>=1)
    printf("True");
    else
    printf("False");
}
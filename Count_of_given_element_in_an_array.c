#include<stdio.h>
int main ()
{
    int n,i,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(ar[i]==a)
        c++;
    }printf("%d",c);
}
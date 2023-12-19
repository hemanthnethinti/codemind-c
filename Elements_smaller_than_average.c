#include<stdio.h>
int main ()
{
    int n,c=0,e,i,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        c+=ar[i];
    }e=c/n;
    for(i=0;i<n;i++)
    {
    if(ar[i]<=e)
    s++;
    }
    printf("%d",s);
}
    
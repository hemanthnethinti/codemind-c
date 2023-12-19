#include<stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }int c=0;
    for(i=0;i<n;i++)
    {
        if(ar[i-1]%2==1&&ar[i]%2==0&&ar[i+1]%2==1)
        c++;
    }
    printf("%d",c);
    
}
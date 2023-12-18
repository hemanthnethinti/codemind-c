#include<stdio.h>
int main ()
{
    int i,ar[100],n,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
        max=ar[0];
        for(i=0;i<n;i++)
        {
        if(ar[i]>max)
        max=ar[i];
        }
    printf("%d",max);
}
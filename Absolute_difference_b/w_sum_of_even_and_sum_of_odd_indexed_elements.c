#include<stdio.h>
#include<math.h>
int main ()
{
    int i,ar[100],n,m,max=0,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
        for(i=0;i<n;i++)
        {
        if(i%2==0)
        max+=ar[i];
        if(i%2==1)
        min+=ar[i];
        }m=abs(max-min);
    printf("%d",m);
}
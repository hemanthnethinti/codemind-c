#include<stdio.h>
int main ()
{
    int n,ar[100],sum=0;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        sum+=ar[i];
    }
        
    printf("%d",sum);
}
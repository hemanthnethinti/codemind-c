#include<stdio.h>
int main ()
{
    int n,ar[100];
    int sum=0;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }printf("%d",sum);
    
}
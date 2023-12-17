#include<stdio.h>
int main ()
{
    float n,ar[100],y,sum=0;
    scanf("%f",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%f",&ar[i]);
        y=(sum+=ar[i])/n;
    }
        
    printf("%.2f",y);
}
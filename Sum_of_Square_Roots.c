#include<stdio.h>
#include<math.h>
int main()
{
    float n,m,i,x,sum=0;
    scanf("%f%f",&n,&m);
    for(i=n;i<=m;i++)
    {
        x=sqrt(i);
        sum+=x;
    }
    printf("%.2f",sum);
    
}
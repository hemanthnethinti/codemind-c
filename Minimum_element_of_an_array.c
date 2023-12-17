#include<stdio.h>
int main ()
{
    float n,ar[100],min;
    scanf("%f",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%f",&ar[i]);
        min=ar[0];
        if(min>ar[i])
        min=ar[i];
    }
        
    printf("%.0f",min);
}
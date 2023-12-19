#include<stdio.h>
int main ()
{
    int n,c=0,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0&&i%2==0)
        c++;
    }if(c>=n/2)
    printf("True");
    else 
    printf("False");
}
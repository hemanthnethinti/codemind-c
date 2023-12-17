#include<stdio.h>
int main ()
{
    int i,n,g,ar[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&ar[i]);
     if(i%2==1)
     c+=ar[i];
    }
     printf("%d",c);
}
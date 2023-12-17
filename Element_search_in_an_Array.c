#include<stdio.h>
int main ()
{
    int k,i,n,ar[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(ar[i]==k)
       c++;
    }  if(c>=1)
       printf("True");
       else 
       printf("False");
    
}
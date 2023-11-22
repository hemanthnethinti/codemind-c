#include<stdio.h>
int main ()
{
    int n,t,i,x,rev=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    
    {
       x=n%10;
       rev=rev*10+x;
       n=n/10;
    }
    if(rev==t)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}
#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int a=0;
    int b=1;
    int c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        
            if(n==c)
            {
                count++;
               break;
            }
        a=b;
        b=c;
    }if(count==1)
    printf("True");
    else 
    printf("False");
}
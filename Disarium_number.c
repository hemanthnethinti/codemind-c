#include<stdio.h>
#include<math.h>
int main()
{
    int n,k,l;
    scanf("%d",&n);
    int m;
    int a;
    int c=0;
    int x=0;
    k=n;
    l=n;
    while(n>0)
    {
        m=n%10;
        c++;
        n=n/10;
    }
    while(k>0)
    {
        m=k%10;
        k=k/10;
        a=pow(m,c);
        x+=a;
        c--;
    }
    if(l==x)
    printf("True");
    else 
    printf("False");
}
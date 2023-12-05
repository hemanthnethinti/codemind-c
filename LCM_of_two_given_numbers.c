#include<stdio.h>
int main()
{
    int a,n,m,i;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
      m=a*i;
      if(m%n==0)
      {
         printf("%d",m);
          break;
       }
    }
}
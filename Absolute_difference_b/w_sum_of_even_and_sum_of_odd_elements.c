#include<stdio.h>
#include<math.h>
int main ()
{
    int n,y,ar[100],sum=0,diff=0;
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        sum+=ar[i];
        if(ar[i]%2==1)
        diff+=ar[i];
    }
        y=abs(diff-sum);
    printf("%d",y);
}
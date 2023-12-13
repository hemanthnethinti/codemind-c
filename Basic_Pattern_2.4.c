#include<stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 for(int r=n;r>=1;r--)
 {
     for(int c=r;c<=n;c++)
     printf("%d ",c);
     printf("
");
     
 }
}
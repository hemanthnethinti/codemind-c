#include<stdio.h>
#include<math.h>
int main ()
{
    float p,r,t,b;
    scanf("%f%f%f",&p,&r,&t);
    b=pow((1+r/100),t);
    printf("%.2f",p*(b)-p);
}
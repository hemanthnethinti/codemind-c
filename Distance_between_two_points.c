#include<stdio.h>
#include<math.h>
int main ()
{
    float x,y,X,Y,b;
    scanf("%f%f%f%f",&x,&y,&X,&Y);
    b=sqrt((X-x)*(X-x)+(Y-y)*(Y-y));
    printf("%.4f",b);
}
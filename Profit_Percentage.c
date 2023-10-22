#include<stdio.h>
int main ()
{
    int cp,sp;
    float p;
    scanf("%d%d",&cp,&sp);
    p=((float)(sp-cp)/cp)*100;
    printf("%.2f
",p);
}
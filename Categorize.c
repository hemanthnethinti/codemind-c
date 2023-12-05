#include<stdio.h>
int main ()
{
    float n;
    scanf("%f",&n);
    if(n<150.0)
    printf("The person is Dwarf.");
    else if(n>150.0&&n<=165.0)
    printf("The person is average heighted.");
    else if ( n>165.0&&n<=195.0)
    printf("The person is taller.");
    else if (n>195.0)
    printf("Abnormal height.");
}
#include<stdio.h>
int main()
{
    char ch,a,e,i,o,u,A,I,E,O,U;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i'  || ch=='o' || ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("VOWEL");
    else
    printf("CONSONANT");
}
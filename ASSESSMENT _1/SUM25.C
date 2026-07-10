//sum 25
#include <stdio.h>
int main()
{
    int in;
    printf("enter a number");
    scanf("%d",&in);
    int a=in/10;
    int b=in%10;
    int c=a+b;
    printf("%d",c);
}
//sum24
#include <stdio.h>
int main()
{
    int in;
    printf("enter a number");
    scanf("%d",&in);
    int a=in/1000;
    int h=in/100;
    int b=h%10;
    int j=in/10;
    int c=j%10;
    int d=in%10;
    
    printf("%d%d%d%d",b,a,c,d);
}
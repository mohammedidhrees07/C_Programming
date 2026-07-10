//sum10
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b=a%100;
    //printf("%d",b);
    int c=b/10;
    printf("%d",c);
}
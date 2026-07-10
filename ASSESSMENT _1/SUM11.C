//sum11
#include<stdio.h>
int main()
{
    int ab;
    printf("Enter a number: ");
    scanf("%d",&ab);
    int a=ab/100;
    printf("huns=%d\n",a);
    int cd =ab%100;
    int b=cd/10;
    printf("tens=%d\n",b);
    int c=ab%10;
    printf("ones=%d\n",c);
    int sum=a+b+c;
    printf("TOTAL=%d",sum);
}
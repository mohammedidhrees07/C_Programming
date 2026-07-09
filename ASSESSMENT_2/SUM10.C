#include <stdio.h>
int main()
{
    int a;
    printf("Enter A Tow Digit Number\n");
    scanf("%d",&a);
    int num1=a/10;
    int num2=a%10;
    if(num1<num2)
    {
        printf("1");
    }
    else if(num1>num2)
{
    printf("0");
}
else {
    printf("error");
}
}
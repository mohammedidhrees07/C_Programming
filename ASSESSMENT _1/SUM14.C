//sum14
#include<stdio.h>
int main()
{
 int ab;
     printf("Enter a number: ");
    scanf("%d",&ab);
   int aa=ab/1000;
     printf("aa=%d\n",aa);
    int ad=ab/100;
    int a=ad%10;
    printf("a=%d\n",a);
    int cd =ab%100;
    int b=cd/10;
    printf("b=%d\n",b);
    int c=ab%10;
    printf("c=%d\n",c);
   printf("%d%d%d%d",aa,a,c,b);
}
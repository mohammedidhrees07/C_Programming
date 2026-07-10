//sum17
#include <stdio.h>
int main()
{
    int a;
    int c=2;
    printf("enter a number ");
    scanf("%d",&a);
    int aa=a/100;
    //printf("%d",aa);
    int ab=a%100;
    
    int b =ab/10;
   // printf("%d",b);
    printf("%d%d%d",aa,b,c);
}
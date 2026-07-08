#include <stdio.h>
int main()
{
    int num;
    printf("Enter a four digit number :");
    scanf("%d",&num);
    int a=num/100;
    //printf("%d\n",a);
    int b=num%100;
    //printf("%d",b);
    if(a==b){
        printf("1");
    }
    else {
        printf("0");
        
    }
        
}
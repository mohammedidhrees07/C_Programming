#include<stdio.h>
int main()
{
    int th;
    printf("Enter A four digit number : \n");
    scanf("%d",&th);
    
    int a=th/100;
    //printf("a=%d",a);
    
    int sub=th%100;
     //printf("c=%d",c);
     
     int b=sub/10;
    //  printf("b=%d",b);
    
    int c=th%10;
   //  printf("c=%d",c);
     if(c<=b){
         printf("1");
     }
     else {
         printf("0");
     }
    
}
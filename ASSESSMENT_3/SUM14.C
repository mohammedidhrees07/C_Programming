//sum14
#include <stdio.h>
int main()
{
 int in;
 printf("enter a number : ");
 scanf("%d",&in);
int a=in/1000;
int h=in/100;
int b=h%10;
int j=in%100;
int c=j/10;
int d=j%10;

 


 if(h==j)
 {
     printf("Success ");
 }
 else {
     printf("Failuer");
 }
}
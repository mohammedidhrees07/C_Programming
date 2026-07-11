//sum10
#include <stdio.h>
int main()
{
 int in;
 printf("enter a number : ");
 scanf("%d",&in);
 int a=in/10;
 int b=in%10;
 if(a<b)
 {
     printf("Success ");
 }
 else {
     printf("Failuer");
 }
}
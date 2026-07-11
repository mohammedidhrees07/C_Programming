//sum13
#include <stdio.h>
int main()
{
 int in;
 printf("enter a number : ");
 scanf("%d",&in);
 int a=in/100;
 int ba=in%100;
 int b=ba/10;
 int c=ba%10;
 

 if(c==b)
 {
     printf("Success ");
 }
 else {
     printf("Failuer");
 }
}

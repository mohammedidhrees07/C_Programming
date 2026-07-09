#include <stdio.h>
int main()
{
   int a;
   printf("Enter A Tow Digite Number\n");
   scanf("%d",&a);
   int b=a/10;
//   printf("Frist digit number is %d",b);
int c = a%10;
//printf("Second digit number is %d",c);
if(b==c)
{
    printf("1");
}
else {
    printf("0");
}

}
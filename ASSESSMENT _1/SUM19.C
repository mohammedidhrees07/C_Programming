//sum19
#include <stdio.h>
  int main()
  {
      int a;
      printf("enter a number ");
      scanf("%d",&a);
      int ab=a/10;
    // printf("%d",ab);
     // int b=ab%10;
    
       a= a-(ab%2)*5;
      printf("%d",a);
  }
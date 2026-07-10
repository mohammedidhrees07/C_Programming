//SUM20
#include <stdio.h>
  int main()
  {
      int ab;
      printf("enter a number ");
      scanf("%d",&ab);
      int ac=ab/10;
      int ad=ab%10;
      int a=ac+ad;
      a = ab-(a%2)*5;
      printf("%d",a);
  }

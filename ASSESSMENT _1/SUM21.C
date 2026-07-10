//SUM22
 #include <stdio.h>
  int main()
  {
      int in;
      printf("enter a number ");
      scanf("%d",&in);
      int a=in/100;
     // printf("%d",a);
      int b=in%10;
      in=in-(a%2)*(b%2)*5;
      printf("%d",in);
  }
  
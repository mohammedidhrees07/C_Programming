//sum18
  #include <stdio.h>
  int main()
  {
      int a;
      printf("enter a number ");
      scanf("%d",&a);
      a = a-(a%2)*5;
      printf("%d",a);
  }

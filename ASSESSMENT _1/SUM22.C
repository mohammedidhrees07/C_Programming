//SUM22
  #include <stdio.h>
  int main()
  {
      int in;
      printf("enter a number in three digit only: ");
      scanf("%d",&in);
      int a=in/100;
      //printf("%d",a);
      int bb=in/10;
     int b=bb%10;
     int c=in%10;
     int d=a+b+c;
     if(d<=10)
     {
         printf("%d",d);
     }
     else if(d>10)
     {
         int aa=d/10;
         int cc=d%10;
         int dd=aa+cc;
         if(dd<=10){
             printf("%d",dd);
             
         }
         else if(dd>10){
             int aaa=dd/10;
             int bbb=dd%10;
             int ccc=aaa+bbb;
             if(ccc<=10){
                 printf("%d",ccc);
             }
             else if(ccc>10){
                 int aaaa=ccc/10;
             int bbbb=ccc%10;
             int cccc=aaaa+bbbb;
             printf("%d",cccc);
             }
         }
     }
  }
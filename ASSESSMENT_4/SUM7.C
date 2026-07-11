//sum7
#include <stdio.h>
int main()
{
    int a;
    for(a=10;a<=99;a++)
    {
        if(a%2==1)
        {
            int ab=a/10;
            int ac=a%10;
            int b=ab+ac;
            if(b==7){
                printf("%d\n",a);
            }
        }
    }
}
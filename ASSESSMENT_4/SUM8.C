//sum8
#include <stdio.h>
int main(){
    int a;
    for(a=10;a<=99;a++)
    {
        if(a%2==0)
        {
            int aa=a/10;
            int bb=a%10;
            int b=aa+bb;
        
            if(b==6){
                printf("%d\n",a);
            }
        }
        
    }
}
#include <stdio.h>

void main(void){
    int a=2,b=1,c;
    while(b<=12){
        c=a*b;
        printf("%d x %d = %d \n",a,b,c);
        b++;
    }
}
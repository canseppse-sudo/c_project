#include <stdio.h>

void main(void){
    int a,b=1,c;

    printf("rak mom : ");
    scanf("%d",&a);

    while(b<=12){
        c=a*b;
        printf("%d x %d = %d \n",a,b,c);
        b++;
    }
}


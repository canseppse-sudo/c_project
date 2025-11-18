#include <stdio.h>

void main (void) {
    int a,b,c ;

    printf("hello ja :");
    scanf("%d",&a);

    for(b=1 ; b <= 12 ; b++) {
        c = a * b;
        printf("%d X %d = %d\n",a , b ,c );
    }
}
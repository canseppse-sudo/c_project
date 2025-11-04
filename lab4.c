#include <stdio.h>

// find BMI
// m/h^2

int main( void){

    float n ; // ค่าของ M
    float l ; // ค่าของ H

    printf( "Enter Mass (kg) >>  ");
    scanf( "%f" , &n );

    printf( "Enter Hight (cm) >> ");
    scanf( "%f" , &l );

    l = l/100 ;

    float bmi = n/(l*l)  ; // สูตร

    printf( "Mass = %.0f \nHigh = %.0f \nBMI = %.2f" , n , l*100 ,bmi ) ;

}

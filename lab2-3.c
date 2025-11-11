#include <stdio.h>
// หา BMI
// m/h^2
 
void main( void){
float a ; // ค่ามวล
float b ; // ค่าสูง
printf( "Enter Weight (kg) >> ");
scanf( "%f" , &a );
printf( "Enter High (cm) >> ");
scanf( "%f" , &b );
b = b/100 ;
float bmi = a/(b*b) ; // สูตร
printf( "Weight = %.0f \nHigh = %.0f \nBMI = %.2f" ,a , b*100 ,bmi ) ;

if( bmi <= 18.5){
   printf("pai eat na kaa");
}

else if(bmi >=18.5 &&bmi <= 24.9){
        printf("dee deeee makkk");
}

else if(bmi >=25.0 && bmi <= 29.9){
    printf("aune");
}

else if(bmi >=30.0){
    printf("aunemak e mU");
}
}

/*
* Author: Francisco Xavier (fxaviertemp@gmail.com)
* The C Programming Language - Second Edition Exercisies
* 1-4 Celsius Fahrenheit table 
* F = (C * 1.8) + 32
*/
#include<stdio.h>

int main(void)
{
    float far = 0 ;
    
    printf("Show   Celsius Fahrenheit Table For -17 >= C >= 148\n");
    printf("  C \tF\n");
    for( int i = -17; i <= 148; i= i+11){
        far =  (i * 1.8) + 32;
        printf(" %3d  %3.0f\n", i, far);
    }
    return 0;
}
/*
* Author: Francisco Xavier (fxaviertemp@gmail.com)
* The C Programming Language - Second Edition Exercisies
* 1-3 Fahrenheit Celsius  table 
* C = (5/9)(F-32)
*/
#include<stdio.h>

int main(void)
{
    float celsius = 0 ;
    
    printf("Show Celsius Fahrenheit Table For 0 >= F >= 300\n");
    printf("  F \tC\n");
    for( int i = 0; i <= 300; i= i+20){
        celsius =  (5*(i-32))/9;
        printf(" %3d  %3.0f\n", i, celsius);
    }
    return 0;
}
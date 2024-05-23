/*
* Author: Francisco Xavier (fxaviertemp@gmail.com)
* The C Programming Language - Second Edition Exercisies
* 1- 7 Copy Input to Output
*/
#include<stdio.h>

int main(void)
{
    int c;

    while( (c = getchar() )!= EOF){
        putchar(c);
    }
    putchar(c);

    return 0;
}
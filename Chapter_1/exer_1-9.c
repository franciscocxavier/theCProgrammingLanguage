/*
* Author: Francisco Xavier (fxaviertemp@gmail.com)
* The C Programming Language - Second Edition Exercisies
* 1- 9 Copy Input to output skkiping duplicate blank spaces
*/
#include<stdio.h>

int main(void)
{
    char input[100], output[100];

    printf("Type a string with duplicate blank spaces\n");
    gets(input);

    int outputIndex;
    
    for(int i = 0; i < 100; i++){
        if(input[i]!= ' '){
            output[outputIndex] = input[i];
            outputIndex++;
        }else{

        }

    }
    printf("%s", input);

    return 0;
}
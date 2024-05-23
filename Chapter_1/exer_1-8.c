/*
* Author: Francisco Xavier (fxaviertemp@gmail.com)
* The C Programming Language - Second Edition Exercisies
* 1- 8 Cont blanks tabs and newlines
*/
#include<stdio.h>

int main(void)
{
    int c = 0 , nCount = 0 , bCount = 0, tCount = 0;

    while( (c = getchar() )!= EOF){// USe CTRl + D to insert EOF in execution loop 
        if (c == '\n'){
            ++nCount;
        }
        if (c == '\t'){
            ++tCount;
        }
        if (c == ' '){
            ++bCount;
        }
    }
    
    printf(" %d  Blanks\n", bCount);
    printf(" %d  New Lines\n", nCount);
    printf(" %d  Tabs\n", tCount);

    return 0;
}
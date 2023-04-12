/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char ch;
    printf("Input character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("'%c' is uppercase alphabet", ch);
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("'%c' is lowercase alphabet", ch);
    }
    else {
        printf("'%c' is not an alphabet", ch);
    }

    return 0;
}
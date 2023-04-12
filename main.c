/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num;
    printf("Input number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("%d is positive", num);
    }
    else if (num < 0) {
        printf("%d is negative", num);
    }
    else {
        printf("%d is zero", num);
    }
    
    return 0;
}
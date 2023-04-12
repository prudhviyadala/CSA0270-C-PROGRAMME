/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        count++;
        num /= 10;
    }
    
    printf("Number of digits: %d\n", count);
    
    return 0;
}
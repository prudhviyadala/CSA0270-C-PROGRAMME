/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {
    int num, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
    }
    printf("Reverse of %d = %d\n", num, rev);
    return 0;
}
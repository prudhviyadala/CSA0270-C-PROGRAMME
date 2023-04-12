/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int decimal_num, binary_num = 0, remainder, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_num);

    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }

    printf("Binary number: %07d", binary_num); // to print 7 digits with leading 0s if necessary
    return 0;
}
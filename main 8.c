/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
   int num, sum = 0, rem;

   printf("Enter a number: ");
   scanf("%d", &num);

   for (; num != 0; num /= 10) {
      rem = num % 10;
      sum += rem;
   }

   printf("Sum of digits: %d\n", sum);

   return 0;
}

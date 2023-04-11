/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    // declare and intialize the variables
    int num, rem, sum=0,i;
    // take an input from the user
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    printf("%d is a perfect number");
    else
    printf("\n%d is not a perfect number");
    getch();
}


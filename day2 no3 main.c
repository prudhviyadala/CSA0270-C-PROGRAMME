/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i;
    printf("Enter any 10 array elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nOdd Array elements are:\n");
    for(i=0; i<10; i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ", arr[i]);
        }
    }
    getch();
    return 0;
}


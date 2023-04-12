/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int num, originalnum, remainder,result=0;
    printf("enter a three-digit integer:");
    scanf("%d",&num);
    originalnum=num;
    while (originalnum!=0)
    {
        remainder=originalnum%10;
        result+=remainder*remainder*remainder;
        originalnum/=10;
    }
    if(result==num)
    printf("%d is an armstrong number.", num);
    else
    printf("%d is not an armstrong number.",num);
    
    return 0;
}
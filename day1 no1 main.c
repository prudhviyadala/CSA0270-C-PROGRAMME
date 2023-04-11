/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,i,flag;
    printf("\nenter start value:");
    scanf("%d",&a);
    printf("\nenter end value:");
    scanf("%d",&b);
    printf("prime numbers between %d and %d:", a,b);
    while ( a<b)
    {
        flag=0;
        for(i=2;i<=a/2;++i)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        printf("%d",a);
        ++a;
    }
    printf("\n");
    
    return 0;
}




    

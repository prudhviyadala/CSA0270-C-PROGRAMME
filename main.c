/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
int main(){
int n,i;
int fact,rem;
printf("Enter a number : ");
scanf("%d",&n);
printf(".");
int sum = 0;
int temp = n;
while(n){
 i = 1,fact = 1;
 rem = n % 10;
 while(i <= rem){
fact = fact * i;
i++;
 }
 sum = sum + fact;
 n = n / 10;
}
if(sum == temp)
printf("%d is a strong number.",temp);
else
 printf("%d is not a strong number.",temp);
return 0;
}


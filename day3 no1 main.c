/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

****/

#include <stdio.h>
#define PI 3.14
 
int main()
{
  float radius, area, circumference, diameter;
 
  printf("\n Please Enter the radius of a circle : ");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * PI * radius;
  area = PI * radius * radius; 
 
  printf("\n Diameter Of a Circle = %.2f\n", diameter);
  printf("\n Circumference Of a Circle = %.2f\n", circumference);
  printf("\n Area Of a Circle = %.2f\n", area);
 
  return 0;
}
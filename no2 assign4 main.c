/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
struct player
{
     char name[20];
     int runs;
};
int main()
{
     int i,s=0;
     struct player a[11]; //a[11] - no. of players
     printf("Enter Name of Player Runs Scored \n");
     printf("---------------------------------------------\n\t");
     for(i=0;i<=10;i++)
     {
          scanf("%s",a[i].name);
          scanf("%d",&a[i].runs);
          printf("\t");
     }
     for(i=0;i<=10;i++)
          s=s+a[i].runs;
     printf("\n---------------------------------------------\n");
     printf("Total Runs Scored by Team: %d",s);
    return 0;
}

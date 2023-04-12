/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int amount, notes[8] = {0}, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1}; // Initializing the array for notes and denominations
    printf("Enter the amount: ");
    scanf("%d", &amount);

    for(int i=0; i<8; i++) { // Loop through all denominations
        if(amount >= denominations[i]) { // Check if denomination is smaller or equal to the amount
            notes[i] = amount / denominations[i]; // Calculate number of notes required
            amount = amount % denominations[i]; // Update the remaining amount
        }
    }

    printf("Total number of notes:\n");
    for(int i=0; i<8; i++) { // Loop through all denominations again
        printf("%d: %d\n", denominations[i], notes[i]); // Print number of notes required for each denomination
    }

    return 0;
}

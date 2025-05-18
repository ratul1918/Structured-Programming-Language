/*
    Question:
    Write a C program to print the following pyramid pattern using numbers.
    The pattern should increase from 1 to 5 rows and then decrease back to 1 row.
    Each row starts printing from 1 up to the number of digits in that row.
    Example output:

        1 
       1 2 
      1 2 3 
     1 2 3 4 
    1 2 3 4 5 
     1 2 3 4 
      1 2 3 
       1 2 
        1 
*/

#include <stdio.h>

int main() {
    int i, j, z, k = 0; // Declare variables: loop counters i, j, z; k controls number of digits per row

    // Outer loop to print 9 rows in total (5 up + 4 down)
    for(i = 1; i <= 9; i++) {

        // Use k to control how many numbers will be printed in the row
        // Increase k until the 5th row, then decrease
        i < 6 ? k++ : k--;

        z = 1; // Reset the number to start from 1 for each row

        // Inner loop for printing each column (always 5 columns)
        for(j = 1; j <= 5; j++) {

            // Print numbers only when column number is within the printable range
            if(j >= 6 - k) {
                printf("%d ", z); // Print the number followed by space
                z++;              // Increment the number
            } else {
                printf(" ");      // Print space for alignment
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

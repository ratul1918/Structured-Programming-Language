/*
Write a C program to print a symmetric diamond pattern made of asterisks (*),
based on the number of rows input by the user.

- The pattern should be symmetric for both odd and even values of rows.
- The program must adjust the middle point correctly for even/odd cases.

Example Output:
For rows = 5
  *  
 *** 
*****
 *** 
  *

For rows = 6
   *  
  *** 
 ***** 
 ***** 
  *** 
   *  
*/

#include <stdio.h>

int main() {
    int i, j, k = 0, row, n;

    // Input: number of rows
    printf("Enter number of rows: ");
    scanf("%d", &row);

    // Calculate the middle line (helps with symmetry)
    n = (row + 1) / 2;

    // Loop through each row
    for (i = 1; i <= row; i++) {

        // Adjust value of k based on row position for symmetry
        if (row % 2 == 0) {
            if (i <= n)
                k++;
            else if (i > n + 1)
                k--;
        } else {
            (i <= n) ? k++ : k--;
        }

        // Loop through each column
        for (j = 1; j <= row; j++) {
            // Print star if within range, otherwise space
            if (j >= n + 1 - k && j <= n - 1 + k)
                printf("*");
            else
                printf(" ");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

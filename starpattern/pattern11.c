/*
    Question:
    Write a C program to print an inverted pyramid pattern of stars (*).
    The number of rows is input by the user.

    Example Input:
    Enter the number of rows: 4

    Example Output:
    *********
     *******
      *****
       ***
        *
*/

#include <stdio.h>

int main() {
    int i, j, rows;

    // Prompt user to enter number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for(i = 1; i <= rows; i++) {
        
        // Inner loop for columns from 1 to (2*rows - 1)
        for(j = 1; j <= (2 * rows - 1); j++) {

            // Print star if within the bounds of the pyramid row
            if(j >= i && j <= 2 * rows - i) {
                printf("*");
            } else {
                // Print space outside the pyramid bounds
                printf(" ");
            }
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

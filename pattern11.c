#include <stdio.h>

int main() {
    int i, j, rows, k = 0;

    // Ask user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for each row
    for (i = 1; i <= rows; i++) {

        // Inner loop to handle columns
        // Total columns = 2*rows - 1 to keep the pattern symmetrical
        for (j = 1; j <= (2 * rows - 1); j++) {

            // Print '*' if j is between i and 2*rows - i (inclusive)
            // This creates the inward-slanting pattern
            if (j >= i && j <= 2 * rows - i) {
                printf("*");
            } else {
                printf(" "); // Else print space
            }
        }

        printf("\n"); // Move to next line after each row
    }

    return 0;
}

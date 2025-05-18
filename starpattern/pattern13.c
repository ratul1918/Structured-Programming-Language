/*
    Question:
    Write a C program to print the following inverted right-angle number triangle pattern:
    The triangle should have 7 rows, where each row starts from a specific decreasing number
    and prints numbers in descending order. Each row reduces by one element from the previous.

    Example Output:
    6 5 4 3 2 1 0
    5 4 3 2 1 0
    4 3 2 1 0
    3 2 1 0
    2 1 0
    1 0
    0
*/

#include <stdio.h>

int main() {
    int i, j, k;

    // Outer loop controls the number of rows (1 to 7)
    for(i = 1; i <= 7; i++) {

        k = 7 - i; // Set the starting number for the current row

        // Inner loop controls columns (always goes from 1 to 7)
        for(j = 1; j <= 7; j++) {

            // Only print numbers if we haven’t reached the limit for this row
            if(j <= 8 - i) {
                printf("%d ", k); // Print the number
                k--;              // Decrement to print descending numbers
            } else {
                printf(" ");      // Extra space (optional for alignment)
            }
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

/*
Write a C program to print the following pyramid pattern using alphabets:

   A
  ABA
 ABCBA
ABCDCBA

Rules:
- Each row contains characters in ascending order up to a point, then descending.
- The number of rows is 4.
- Characters start from 'A' each row.
*/



#include <stdio.h>

int main() {
    int i, j;
    char k;

    // Outer loop for 4 rows
    for (i = 1; i <= 4; i++) {
        k = 'A'; // Reset character for each row

        // Inner loop for 7 columns to print characters and spaces
        for (j = 1; j <= 7; j++) {
            // Condition to print character
            if (j <= 5 - i || j >= 3 + i) {
                printf("%c", k);

                // If in the first half of the row, increment character
                // Else in second half, decrement character
                if (j < 4)
                    k++;
                else
                    k--;
            } else {
                // Print space in middle of pyramid
                printf(" ");

                // Adjust character only at the middle to prevent double increment
                if (j == 4)
                    k--;
            }
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

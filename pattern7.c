/*
Write a C program to print the following character pyramid pattern:

   A   
  ABA  
 ABCBA 
ABCDCBA

Pattern Details:
- The pattern has 4 rows.
- Each row starts with 'A' and increases alphabetically to a peak, then decreases back.
- Spaces are inserted for symmetry.
*/



#include <stdio.h>

int main() {
    int i, j;
    char k;

    // Loop for 4 rows
    for (i = 1; i <= 4; i++) {
        k = 'A'; // Start with 'A' for each row

        // Loop through 7 columns
        for (j = 1; j <= 7; j++) {

            // Print character in pyramid shape
            if (j <= 5 - i || j >= 3 + i) {
                printf("%c", k);

                // Increase character in the left half
                if (j < 4)
                    k++;
                // Decrease character in the right half
                else
                    k--;
            } else {
                // Print space for center gaps
                printf(" ");

                // Adjust character if space is exactly at center
                if (j == 4)
                    k--;
            }
        }

        // Move to next row...
        printf("\n");
    }

    return 0;
}


/*
    Question:
    Write a C program to print a centered number pyramid with 4 rows.
    The numbers increase from the left to the center and then decrease.
    Each row starts and ends with spaces to form a symmetric pyramid.

    Example Output:
       1    
      232   
     34543  
    4567654 
*/

#include <stdio.h>

int main() {
    int i, j, k;

    // Loop through rows (1 to 4)
    for(i = 1; i <= 4; i++) {
        k = i;  // Set starting number for the row

        // Loop through columns (1 to 7 to form pyramid width)
        for(j = 1; j <= 7; j++) {
            
            // Check whether to print number or space
            if(j >= 5 - i && j <= 3 + i) {
                printf("%d", k);     // Print current number

                // Increase number until center (position 4), then decrease
                j < 4 ? k++ : k--;  
            } else {
                printf(" ");         // Print space for pyramid shape
            }
        }
        printf("\n");  // Move to next row
    }

    return 0;
}

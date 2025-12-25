/*
    Question:
    Write a C program to print a symmetric diamond star pattern based on the number of rows entered by the user.
    The program should handle both even and odd numbers of rows correctly.

    Example Input:
    Enter number of rows: 5

    Example Output:
      *  
     *** 
    ***** 
     *** 
      *  

    Example Input:
    Enter number of rows: 6

    Example Output:
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

    // Ask user to enter the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &row);

    // Calculate the midpoint (n)
    n = (row + 1) / 2;

    // Loop through each row
    for(i = 1; i <= row; i++) {

        // Update k (number of stars to print)
        if(row % 2 == 0) { // If number of rows is even
            if(i <= n) k++;        // Increasing phase
            if(i > n + 1) k--;     // Decreasing phase
        } else { // If number of rows is odd
            i <= n ? k++ : k--;    // Increase until mid, then decrease
        }

        // Print stars and spaces for each row
        for(j = 1; j <= row; j++) {
            if(j >= n + 1 - k && j <= n - 1 + k) // Check range for star
                printf("*");
            else
                printf(" "); // Outside range, print space
        }

        // Move to the next line after printing one row
        printf("\n");
    }

    return 0;
}

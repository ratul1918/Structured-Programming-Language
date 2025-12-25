/*
    Question:
    Write a C program to print a half-diamond pattern of stars (*), where the number of rows is odd..
    The pattern should first increase in stars until the middle row and then decrease..

    Example Input:
    Enter the number of rows: 5

    Example Output:
    *    
    **   
    ***  
    **   
    *    
*/

#include <stdio.h>

int main() {
    int i, j, rows, k = 0;

    // Prompt the user to enter the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop to handle number of rows
    for(i = 1; i <= rows; i++) {

        // Determine how many stars to print
        if(i <= (rows + 1) / 2) {
            k++;  // Increasing phase
        } else {
            k--;  // Decreasing phase
        }

        // Inner loop to print stars and spaces
        for(j = 1; j <= (rows + 1) / 2; j++) {
            if(j <= k) {
                printf("*");  // Print star
            } else {
                printf(" ");  // Print space
            }
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}


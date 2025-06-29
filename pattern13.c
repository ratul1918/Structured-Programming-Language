#include<stdio.h>

int main() {
    int i, j, k;

    // Outer loop for each row (total 7 rows)..
    for(i = 1; i <= 7; i++) {
        k = 7 - i; // Initialize k to start decreasing values from 6 to 0..
        
        // Inner loop for each column in a row (total 7 columns)..
        for(j = 1; j <= 7; j++) {
            if(j <= 8 - i) {
                // Print current value of k followed by a space..
                printf("%d ", k);
                k--; // Decrease k for next number
            } 
            else {
                // After printing numbers, fill the rest with spaces
                printf(" ");
            }
        }
        // Move to the next line after finishing one row
        printf("\n");
    }
}

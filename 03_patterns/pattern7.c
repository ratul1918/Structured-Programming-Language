// Question: Write a program to print a half diamond star pattern based on the number of rows (odd number).
// Example for rows = 5:
// *
// **
// ***
// **
// *

#include<stdio.h>
int main(){
    int i, j, rows, k = 0;

    // Take number of rows from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++){

        // For the upper half including the middle line, increment k
        // For the lower half, decrement k
        i <= (rows + 1) / 2 ? k++ : k--;

        for(j = 1; j <= (rows + 1) / 2; j++){
            if(j <= k){
                printf("*"); // Print star
            } 
            else{
                printf(" "); // Print space
            }
        }

        printf("\n"); // Move to the next line
    }
}


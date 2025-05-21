// Question: Write a C program to print a right-angled triangle of asterisks (*) aligned to the right.
// The pattern should look like:
// *****
//  ****
//   ***
//    **
//     *

#include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 5; i++){ // Loop through each row
        for(j = 1; j <= 5; j++){ // Loop through each column in the row
            // Print '*' if column is greater than or equal to the current row number
            if(j >= i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to next line after each row
    }
}


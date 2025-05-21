// Question: Write a C program to print a hollow pyramid star pattern with 5 rows.
// Example output:
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *

#include<stdio.h>
int main(){
    int i, j;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 9; j++){
            // Print star when j is within left or right edge range
            if(j <= 6 - i || j >= 4 + i){
                printf("*");
            } 
            else{
                printf(" "); // Print space inside the pyramid
            }
        }
        printf("\n"); // New line after each row
    }
}

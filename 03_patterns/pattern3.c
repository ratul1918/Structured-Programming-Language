// Question: Write a C program to print a right-angled triangle pattern of asterisks (*) aligned to the left.
// The pattern should look like:
// *****
// ****
// ***
// **
// *

#include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 5; j++){
            // Print '*' for positions less than or equal to (6 - current row)
            if(j <= 6 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to the next line after each row
    }
}

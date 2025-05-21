// Question: Write a C program to print a left-aligned right-angled triangle pattern using asterisks (*).
// The pattern should look like:
//  * 
//  * * 
//  * * * 
//  * * * * 
//  * * * * * 

#include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 5; i++){ // Loop through each row
        for(j = 1; j <= 5; j++){ // Loop through each column
            if(i >= j) // Print '*' when row number is greater than or equal to column number
                printf(" * ");
            else
                printf(" "); // Print space otherwise
        }
        printf("\n"); // Move to the next line after each row
    }
}

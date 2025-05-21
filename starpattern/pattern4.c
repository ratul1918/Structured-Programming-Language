// Question: Write a C program to print a pyramid pattern of asterisks (*) with 5 rows.
// The pattern should look like:
//     *    
//    ***   
//   *****  
//  ******* 
// *********

#include<stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 9; j++){
            // Print '*' if current column is within the range for this row
            if(j >= 6 - i && j <= 4 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n"); // Move to the next line after each row
    }
}

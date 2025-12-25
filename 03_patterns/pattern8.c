// Question: Write a program to print the following character pattern:
// ABCDCBA
// ABC CBA
// AB   BA
// A     A

#include<stdio.h>
int main(){
    int i, j;
    char k;

    for(i = 1; i <= 4; i++){      // Loop for each row (4 rows total)
        k = 'A';                  // Reset character to 'A' for each row

        for(j = 1; j <= 7; j++){  // Loop for each column (7 columns per row)
            if(j <= 5 - i || j >= 3 + i){ // Condition to print characters
                printf("%c", k);
                j < 4 ? k++ : k--;        // Increment till middle, then decrement
            } 
            else{
                printf(" ");              // Print space in the center
                if(j == 4)
                    k--;                  // Adjust character after space
            }
        }
        printf("\n"); // Move to the next line after each row
    }
}

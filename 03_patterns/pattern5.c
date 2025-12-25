// Question: Write a C program to print a pyramid pattern using the letter 'S' with alternating spaces.
// The number of rows is 5. The output looks like:
//     S
//    S S
//   S S S
//  S S S S
// S S S S S

#include<stdio.h>
int main(){
    int i, j, k;
    for(i = 1; i <= 5; i++){
        k = 1; // used to alternate between printing 'S' and space
        for(j = 1; j <= 9; j++){
            if(j >= 6 - i && j <= 4 + i && k){
                printf("S"); // print 'S' when condition is met
                k = 0; // reset flag to print space next
            } 
            else{
                printf(" "); // print space
                k = 1; // reset flag to print 'S' next
            }
        }
        printf("\n"); // move to next line
    }
}

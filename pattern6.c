/*
    Write a C program to print the following pattern using nested loops:

    Pattern:
    *********
    ***** ****
    ****   ****
    ***     ***
    **       **

    Requirements:
    - Use nested `for` loops.
    - The outer loop controls the number of rows (5 rows).
    - The inner loop prints `*` or spaces based on the condition.
    - The total number of columns in each row is 9.
    - `*` are printed when column index `j` is less than or equal to `6 - i` or greater than or equal to `4 + i`.
    - Otherwise, print a space.
*/




#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        
        for(j=1;j<=9;j++){
            if(j<=6-i || j>=4+i){
            printf("*");
             } 
             else{
            printf(" ");
             }
        }
        printf("\n");
    }
}

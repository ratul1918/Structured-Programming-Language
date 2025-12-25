// Question: Write a C program to swap two numbers using a function and pointers.

#include<stdio.h>

// Function to swap the values of two integers using pointers
void swapping(int *p1, int *p2){
    int temp;
    temp = *p1;   // Store the value of *p1 in temp
    *p1 = *p2;    // Assign the value of *p2 to *p1
    *p2 = temp;   // Assign the stored temp value to *p2
}

int main(){
    int x = 10, y = 20;

    // Print values before swapping
    printf("Before swapping: x=%d\n,y=%d\n", x, y);

    // Call the function to swap values of x and y
    swapping(&x, &y);

    // Print values after swapping
    printf("After swapping: x=%d\n,y=%d\n", x, y);
}

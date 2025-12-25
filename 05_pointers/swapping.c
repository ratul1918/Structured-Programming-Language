// Question: Write a C program to swap the values of two variables using pointers.

#include<stdio.h>
int main(){
    int x = 5, y = 10, temp; // Declare and initialize two integers and a temporary variable

    int *p1, *p2; // Declare two integer pointers
    p1 = &x; // p1 points to x
    p2 = &y; // p2 points to y

    temp = *p1;  // Store the value pointed by p1 (i.e., value of x) in temp
    *p1 = *p2;   // Assign value pointed by p2 (i.e., y) to location pointed by p1 (x)
    *p2 = temp;  // Assign temp (original x) to location pointed by p2 (y)

    // Print the swapped values of x and y
    printf("x= %d\n", x);
    printf("y= %d\n", y);
}

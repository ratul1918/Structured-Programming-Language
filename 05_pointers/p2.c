// Question: Write a C program to calculate the sum of three integers using pointers.

#include<stdio.h>
int main(){
    int x = 5, y = 10, z = 30, sum;

    int *p1, *p2, *p3;  // Declare three integer pointers
    p1 = &x;            // p1 points to the address of x
    p2 = &y;            // p2 points to the address of y
    p3 = &z;            // p3 points to the address of z

    sum = *p1 + *p2 + *p3;  // Dereference the pointers and add the values
    printf("Sum= %d\n", sum);  // Print the sum
}

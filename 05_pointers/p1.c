// Question: Write a C program to demonstrate the use of pointers by printing the values and addresses
// of variables x, y, and z using a single pointer variable.

#include<stdio.h>
int main(){
    int x = 5, y = 10, z = 30;

    int *p;         // Declare a pointer to int

    p = &x;         // Pointer p now points to the address of x
    printf("x=%d\n", *p);   // Print the value of x using pointer
    printf("x=%x\n", p);    // Print the address of x in hexadecimal format

    p = &y;         // Pointer p now points to the address of y
    printf("y=%d\n", *p);   // Print the value of y using pointer

    p = &z;         // Pointer p now points to the address of z
    printf("z=%d\n", *p);   // Print the value of z using pointer
}

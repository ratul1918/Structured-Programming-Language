// Question: Write a C program to print the elements of an array using pointers 
// and also display their corresponding memory addresses.

#include<stdio.h>
int main(){
    int a[5] = {10, 20, 30, 40, 50};  // Declare and initialize an array
    int i, *p1;

    p1 = &a[0];  // Initialize pointer to the first element of the array

    for(i = 0; i < 5; i++){
        // Print value using pointer arithmetic and dereferencing
        // Print the memory address of each element
        printf("%d\n%x\n", *(p1 + i), p1 + i);

        // Optional: pointer increment using *p1++ is commented out
    }
}

#include<stdio.h>
#include<string.h>

// Question: Write a C program to swap the contents of two strings using a temporary string.

int main(){
    char str1[30] = "Ratul";
    char str2[20] = "Rahman";
    char temp[40];

    printf("Before swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // Swapping the strings using a temporary string
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    printf("After swapping\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s", str2);

    return 0;
}

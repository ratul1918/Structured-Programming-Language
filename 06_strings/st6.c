#include<stdio.h>
#include<string.h>

// Question: Write a C program to reverse a string without using the built-in strrev() function.

int main(){
    char str1[50] = "Rafiur Rahman";  // Original string
    char str2[50];                    // To store the reversed string
    int i = 0, len = 0, j;

    // Calculate length of str1 manually
    while(str1[i] != '\0'){
        i++;
        len++;
    }

    // Reverse str1 into str2
    for(j = 0, i = len - 1; i >= 0; i--, j++){
        str2[j] = str1[i];
    }

    // Null-terminate the reversed string
    str2[j] = '\0';

    // Output both strings
    printf("str1 = %s\n", str1);
    printf("str2 = %s", str2);

    return 0;
}

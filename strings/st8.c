#include<stdio.h>
#include<string.h>

// Question: Write a C program to check whether a given string is a palindrome or not 
// by reversing the string manually and comparing it with the original.

int main(){
    char str1[50] = "madam";    // Original string
    char str2[50];              // To store the reversed string
    int i = 0, len = 0, j;

    // Calculate the length of the string manually
    while(str1[i] != '\0') {
        i++;
        len++;
    }

    // Reverse the string
    for(j = 0, i = len - 1; i >= 0; i--, j++) {
        str2[j] = str1[i];
    }

    // Null-terminate the reversed string
    str2[j] = '\0';

    // Print both original and reversed strings
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    // Compare the original and reversed strings
    int d = strcmp(str1, str2);
    if(d == 0){
        printf("string is equal");
    }
    else {
        printf("string is not equal");
    }

    return 0;
}

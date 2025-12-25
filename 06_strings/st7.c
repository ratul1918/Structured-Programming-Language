#include<stdio.h>
#include<string.h>

// Question: Write a C program to reverse the contents of a string (without using strrev()) 
// and store the result in another string.

int main(){
    char str1[50] = "Hitman";   // Original string
    char str2[50];              // Reversed string
    int i = 0, len = 0, j;

    // Calculate the length of str1 manually
    while(str1[i] != '\0'){
        i++;
        len++;
    }

    // Reverse the string by copying characters from the end of str1 to the beginning of str2
    for(j = 0, i = len - 1; i >= 0; i--, j++){
        str2[j] = str1[i];
    }

    // Null terminate the reversed string
    str2[j] = '\0';

    // Print both the original and reversed strings
    printf("str1 = %s\n", str1);
    printf("str2 = %s", str2);

    return 0;
}

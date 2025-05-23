#include<stdio.h>

int main() {
    char s1[] = "RAtul"; // Declare and initialize a string

    int i = 0;
    // Loop through each character until null character is reached
    while (s1[i] != '\0') {
        printf("%c\n", s1[i]); // Print one character per line
        i++;
    }

    return 0;
}

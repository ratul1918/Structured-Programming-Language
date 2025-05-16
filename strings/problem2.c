/*
    Write a C program to toggle the case of each character in a given string.

    Requirements:
    - Define a function `toggleCase(char str[])` that converts:
        - Lowercase letters ('a' to 'z') to uppercase ('A' to 'Z')
        - Uppercase letters ('A' to 'Z') to lowercase ('a' to 'z')
    - In `main()`, prompt the user to enter a string (use `fgets()` to read the string including spaces).
    - Call `toggleCase()` on the input string.
    - Display the toggled string.
*/


#include <stdio.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {

        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    toggleCase(str);
    printf("Toggled string: %s", str);

    return 0;
}

#include <stdio.h>
#include <string.h>

/*
    Write a C program that performs the following tasks:

    1. Initializes an integer array and passes it to a function `Arr()`, 
       which currently does not modify the array.
    2. Reads a string from the user.
    3. Removes all non-alphabetic characters from the string using `remove_nonAlpha()`.
    4. Replaces all occurrences of a specific character in the string with a new character 
       using `replace_chars()`. (Note: In the current implementation, the `replace` and 
       `new` characters are not defined before the function call.)
    5. Displays the final modified string.

    Note:
    - Fix the undefined variables `replace` and `new` in `main()` before calling `replace_chars()`.
    - The `Arr()` function currently has no effect on the array.
*/

void Arr(int array[]);
void remove_nonAlpha(char *string);
void replace_chars(char *string, char replace, char new);

int main() {
    int myarray[] = {1, 2, 3, 4, 5};
    Arr(myarray);
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myarray[i]);
    }

    char string[100];
    printf("Enter a string:\n");
    fgets(string, 100, stdin);

    remove_nonAlpha(string);

    // Define the characters to be replaced and their replacement
    char replace = 'a';  // example: replace 'a'
    char new = 'x';      // with 'x'

    replace_chars(string, replace, new);

    printf("After removing non-alpha chars and replacing: %s\n", string);
}

void Arr(int array[]) {
    array[0] = array[0];  // This currently does nothing
}

void remove_nonAlpha(char *string) {
    int len = strlen(string);
    int i = 0, j = 0;
    for (i = 0; i < len; i++) {
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
}

void replace_chars(char *string, char replace, char new) {
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        if (string[i] == replace) {
            string[i] = new;
        }
    }
}

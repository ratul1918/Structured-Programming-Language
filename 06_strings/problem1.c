/*
    Write a C program to check if a string is a substring of another.

    Requirements:
    - Define a function `isSubstring(char mainStr[], char subStr[])` that returns 1 if `subStr` is found inside `mainStr`, else returns 0.
    - In `main()`, read two strings from the user:
        - `mainStr`: the main string
        - `subStr`: the substring to search for
    - Use `fgets()` for string input to handle spaces.
    - If `subStr` is found in `mainStr`, print "Substring Matches."
    - Otherwise, print "Substring does not match."
*/


int main() {
    char mainStr[100], subStr[100];

    printf("Enter the main string: ");
    fgets(mainStr, 100, stdin);
    mainStr[strcspn(mainStr, "\n")] = 0;  // Remove trailing newline

    printf("Enter the substring: ");
    fgets(subStr, 100, stdin);
    subStr[strcspn(subStr, "\n")] = 0;

    if (isSubstring(mainStr, subStr)) {
        printf("Substring Matches.\n");
    } else {
        printf("Substring does not match.\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char s1[30];  // First string (destination)..
    char s2[30];  // Second string (source)..

    printf("Enter the strings: ");
    gets(s1);  // Read first string (unsafe, use fgets in real programs)
    gets(s2);  // Read second string (also unsafe)

    printf("%s\n%s", s1, s2);  // Print both strings

    int len1, len2, i;

    len1 = strlen(s1);  // Length of the first string
    len2 = strlen(s2);  // Length of the second string

    // Append s2 to s1 manually
    for (i = 0; i <= len2; i++) {
        s1[len1 + i] = s2[i];  // Copy characters including null terminator
    }

    printf("concat string= %s", s1);  // Print concatenated string

    return 0;
}

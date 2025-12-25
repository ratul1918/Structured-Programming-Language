#include<stdio.h>
#include<string.h>

int main() {
    char source[] = "Rafiur Rahman Ratul";  // Original string
    char target[30];                        // Destination buffer

    strcpy(target, source);                // Copy source to target

    printf("%s\n", source);                // Output original string
    printf("%s", target);                  // Output copied string

    return 0;
}

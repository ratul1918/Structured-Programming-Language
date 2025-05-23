#include <stdio.h>
#include <string.h>

int main() {
    char str1[30];

    printf("Enter your full name: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove trailing newline character added by fgets
    str1[strcspn(str1, "\n")] = '\0';

    printf("string1 = %s\n", str1);
    return 0;
}

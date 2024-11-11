#include <stdio.h>
int isSubstring(char mainStr[], char subStr[]) {
    int i, j, flag;

    for (i = 0; mainStr[i] != '\0'; i++) {
        flag = 1;

        for (j = 0; subStr[j] != '\0'; j++) {
            if (mainStr[i + j] != subStr[j]) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char mainStr[100], subStr[100];

    printf("Enter the main string: ");
    fgets(mainStr, 100, stdin);

    printf("Enter the substring: ");
    fgets(subStr, 100, stdin);

    if (isSubstring(mainStr, subStr)) {
        printf("Substring Matches.\n");
    } else {
        printf("Substring does not match.\n");
    }

    return 0;
}

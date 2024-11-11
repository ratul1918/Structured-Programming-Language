#include <stdio.h>
#include <string.h>
int main() {
    int test;
    printf("Enter number of test cases: ");
    scanf("%d", &test);
    while (test--) {
        char str[6];
        scanf("%s", str);

        int count_A = 0, count_B = 0;

        for (int i = 0; i < 5; i++) {
            if (str[i] == 'A') {
                count_A++;
            } else {
                count_B++;
            }
        }
        if (count_A > count_B) {
            printf("A\n");
        } else {
            printf("B");
        }
    }

    return 0;
}
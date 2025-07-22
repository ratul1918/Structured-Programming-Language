

/*
    Write a C program to determine the winner between characters 'A' and 'B' 
    based on their occurrences in multiple test cases.

    Requirements:
    - First, take an integer input `test` representing the number of test cases.
    - For each test case, read a 5-character string consisting only of 'A' and 'B'.
    - Count the occurrences of 'A' and 'B' in the string.
    - If 'A' appears more than 'B', print "A".
    - Otherwise, print "B".
*/
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
            printf("B\n");
        }
    }

    return 0;
}

/*
    Write a C program that determines if a given number is "HAPPY" or "SAD".

    A number is considered "HAPPY" if all of its digits are odd numbers.
    If the number contains any even digit, it is considered "SAD".

    Requirements:
    - Read an integer input from the user (1 to 1000 inclusive).
    - If the input is out of range, print "Error:Invalid input." and exit.
    - Otherwise, check each digit of the number.
    - If all digits are odd, print "HAPPY".
    - If any digit is even, print "SAD".
*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num < 1 || num > 1000){
        printf("Error:Invalid input.\n");
        return 1;
    }

    int isHappy = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            isHappy = 0;
            break;
        }
        num /= 10;
    }

    if (isHappy) {
        printf("HAPPY\n");
    } else {
        printf("SAD\n");
    }

    return 0;
}

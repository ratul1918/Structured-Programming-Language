#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    if (num<1 || num>1000){
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
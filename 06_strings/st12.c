
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Why is the array size 100? What happens if the input is longer?
    int i, capital, small, digit;

    printf("Enter the string: ");
    fgets(str, 100, stdin);  // Why is fgets() preferred over gets()?

    // Why are all counters initialized to zero?
    i = capital = small = digit = 0;

    // What is the purpose of this loop?
    while (str[i] != '\0') {  // Why do we check for the null terminator '\0'?
        
        // Why are ASCII values used here instead of characters?
        if (str[i] >= '65' && str[i] <= '90') {  // What range of characters does this condition cover?
            capital++;  // What happens when a capital letter is found?
        }
        else if (str[i] >= '97' && str[i] <= '122') {  // Which characters does this represent?
            small++;  // What does this counter track?
        }
        else if (str[i] >= '48' && str[i] <= '57') {  // What do these ASCII values represent?
            digit++;  // What is counted here?
        }

        i++;  // Why is the index incremented here?
    }

    // What does each printf show to the user?
    printf("\ncapital: %d\n", capital);
    printf("small: %d\n", small);
    printf("Digits: %d\n", digit);

    return 0;  // Why is a return statement used in main()?
}



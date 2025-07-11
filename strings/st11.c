#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, vowel, con, digits, word, others;

    printf("Enter the string: ");
    fgets(str, 100, stdin);  // Why is fgets() used instead of gets()? What advantage does it offer?..

    // Why are all counters initialized to 0 here?
    i = vowel = con = digits = word = others = 0;

    // What does this loop do?
    while ((ch = str[i]) != '\0') {  // Why is '\0' the condition to stop the loop?
        // What characters are being checked in this condition?
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;  // What happens when a vowel is found?
        }
        // Why is this condition checking the letter range?
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            con++;  // If it's not a vowel but still a letter, why do we assume it's a consonant?
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;  // What does this check represent?
        }
        else if (ch == ' ') {
            word++;  // Why do we count spaces as word separators?
        }
        else {
            others++;  // What kind of characters fall into this category?
        }
        i++;  // Why must we increment `i` in each iteration?
    }

    // Why is one added to the word count here?
    if (i > 0) {
        word++;  // Why might this condition prevent overcounting for empty input?
    }

    // What do each of these print statements show the user?
    printf("\nVowels: %d\n", vowel);
    printf("Consonants: %d\n", con);
    printf("Digits: %d\n", digits);
    printf("Words: %d\n", word);
    printf("Others: %d\n", others);

    return 0;
}


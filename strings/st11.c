#include<stdio.h>
#include<string.h>

int main(){
    char str[100], ch;
    int i, vowel, con, digits, word, others;
    
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    i = vowel = con = digits = word = others = 0;

    while ((ch = str[i]) != '\0') {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            con++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            word++;
        } else {
            others++;
        }
        i++;
    }

    if (i > 0) {
        word++;
    }

    printf("\nVowels: %d\n", vowel);
    printf("Consonants: %d\n", con);
    printf("Digits: %d\n", digits);
    printf("Words: %d\n", word);
    printf("Others: %d\n", others);

    return 0;
}
